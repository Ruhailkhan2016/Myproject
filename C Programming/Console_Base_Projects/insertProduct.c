#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char ano;
void insert() // This function is used for insert the Product information
{

    FILE *ptr;              //file pointer for store our data into file
    char myDate[12];        // character array for date formate 

    do                      
    {
        time_t t = time(NULL);                  
        struct tm tm = *localtime(&t);      //return system current date 

        sprintf(myDate, "%02d/%02d/%d", tm.tm_mday, tm.tm_mon+1, tm. tm_year + 1900);     //print current date when we add product
        strcpy(s.date, myDate);

        ptr = fopen("Record.txt", "ab");            //open file in append binary mode 
        if (ptr == NULL)
        {
            printf("\t\t\t\t\t\tError : File is Not found!");
            exit(1);
        }

        printf("\n\t\t\t\t\t\tEnter Product Id                : ");
        scanf("%d", &s.id);

        printf("\t\t\t\t\t\tEnter the Product Name          : ");
        scanf("%s", s.product_name);

        printf("\t\t\t\t\t\tEnter Product Quantity          : ");
        scanf("%d", &s.quantity);

        fwrite(&s, sizeof(s), 1, ptr); // basically fwrite() function is used for write  binary data

        printf("\n\t\t\t\t\t\tProduct Inserted Successfully");
        fclose(ptr);                    //Close current file

        printf("\n\t\t\t\t\t\tDo you want to add another Product?Press (y/n) : ");
        scanf("%s", &ano);                  // here we entring product id for insert another product
    } while (ano == 'y' || ano == 'Y');         //use for repeat current operation
}
