#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// ************* STORE MANAGEMENT SYSTEM *************

char ano;
void update() // Update each Product record one by one....
{
    do
    {
    FILE *ptr;
    int avl_id, r, found = 0;       

    ptr = fopen("Record.txt", "rb+");       //file open in read and write binary mode
    if (ptr == NULL)
    {
        printf("\t\t\t\t\t\tError : File is not Found!!");
        exit(1);
    }

    printf("\t\t\t\t\t\tIf You want to update Product record so please Enter Product : ");
    scanf("%d", &r);            // here we entring product id for updating product

    while (fread(&s, sizeof(s), 1, ptr))
    {
        avl_id = s.id;
        if (avl_id != r)
        {
            found = 1;
        }
        else
        {

            printf("\t\t\t\t\t\tUpdate Product Record\n");

            printf("\n\t\t\t\t\t\tEnter Product Id          : ");
            scanf("%d", &s.id);

            printf("\t\t\t\t\t\tEnter Product Name          : ");
            scanf("%s", s.product_name);

            printf("\t\t\t\t\t\tEnter Product Quantity      : ");
            scanf("%d", &s.quantity);

            fseek(ptr, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, ptr);
        }
    }
    fclose(ptr);

    if (found)
    {
        printf("\t\t\t\t\t\tRecord Update Successfully");
    }
    if (!found)
    {
        printf("\t\t\t\t\t\tSomething went Wrong!!");
    }
    printf("\n\t\t\t\t\t\tDo you want to Search another Product?Press (y/n) : ");
        scanf("%s", &ano);
    } while (ano == 'y' || ano == 'Y');
}
