#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// ************* STORE MANAGEMENT SYSTEM *************

char ano;

void buy()
{   
    do
    {
    int id, f = 0;
    FILE *fp;

    printf("\n\t\t\t\t\t\t <== Buy  Product ==>\n\n");
    printf("\n\t\t\t\t\t\t Enter Product Id     : ");
    scanf("%d", &id);                   

    fp = fopen("Record.txt", "rb+");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (id == s.id)
        {
            f = 1;
            s.quantity = s.quantity - 1;
            fseek(fp, -sizeof(s), 1);
            fwrite(&s, sizeof(s), 1, fp);

            fclose(fp);
            if (s.quantity == 0)
            {
                delete (s.id);
            }
            break;
        }
    }
    if (f == 1)
    {
        printf("\n\n\t\t\t\t\t\tProduct Bought Successfully...\n");
    }
    else
    {
        printf("\n\n\n\t\t\t\t\t\tProduct Not Found!!");
    }

    printf("\n\t\t\t\t\t\tDo you want to Buy another Product?Press (y/n) : ");
        scanf("%s", &ano);                  // here we entring product id for buying another product
    } while (ano == 'y' || ano == 'Y');
}