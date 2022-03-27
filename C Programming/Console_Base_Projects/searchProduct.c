#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct store
{
    int id;
    char product_name[20];
    int quantity;
    char date[12];

} s;
char ano;
void search() // Search Product record for using this function
{
    do
    {
        FILE *ptr;

        int r, avl_id, found = 0;           // r ---> current id,  avl_id -----> available id, found -------> finding record

        ptr = fopen("Record.txt", "rb");
        if (ptr == NULL)
        {
            printf("\t\t\t\t\t\tError : This file is not found!");
            exit(1);
        }

        printf("\n\t\t\t\t\t\tEnter the Product Id to search Product Record : ");
        scanf("%d", &r);            // here we entring product id for searching product

        while (fread(&s, sizeof(s), 1, ptr))    //while for use reading all binary data data, fread for read binary data
        {

            avl_id = s.id; 
            if (avl_id == r)        //compare available id to current Enter id.....
            {
                found = 1;
                printf("\t\t\t\t\t\tRecord is : ");
                printf("\n\t\t\t\t\t\t---------------------------------------------");
                printf("\n\t\t\t\t\t\tProduct Id is          :      %d", s.id);
                printf("\n\t\t\t\t\t\tProduct Name is        :      %s", s.product_name);
                printf("\n\t\t\t\t\t\tProduct Quantity       :      %d\n", s.quantity);
                printf("\t\t\t\t\t\t---------------------------------------------\n");
                break;
            }
        }
        if (found == 0)
        {
            printf("\n\t\t\t\t\t\tNo Record Found!");
        }

        fclose(ptr);

        printf("\n\t\t\t\t\t\tDo you want to Search another Product?Press (y/n) : ");
        scanf("%s", &ano);
    } while (ano == 'y' || ano == 'Y');     //use for repeat current operation
}
