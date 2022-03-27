#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char ano;

void delete () // delete each product record one by one....
{
    do
    {
        FILE *ptr1, *ptr2;          //*ptr1 ----> file pointer in this file have original data, *ptr2 ----->  it is this temporary file 

        int r, avl_id, found = 0;           //r ---> current input id, avl_id ----> available id, found ----> find product record

        ptr1 = fopen("Record.txt", "rb");   // file open in read binary mode

        if (ptr1 == NULL)
        {
            printf("\n\t\t\t\t\t\tSorry..There is No file\n");
            exit(1);
        }

        printf("\n\t\t\t\t\t\tEnter Product Id which you want to delete : ");
        scanf("%d", &r);                // here we entring product id for deleting product

        ptr2 = fopen("copy.txt", "ab+");    //open copy.txt file in reading and append binary mode, 

        while (fread(&s, sizeof(s), 1, ptr1))   //read all binary data using while loop
        {
            avl_id = s.id;
            if (avl_id == r)    //compare available id or user input id....
            {
                found = 1;      
            }
            else
            {
                fwrite(&s, sizeof(s), 1, ptr2); //write in binary file using fwrite function
            }
        }

        fclose(ptr1);       //closing current both file ptr1 and ptr2
        fclose(ptr2);

        if (found)  //if record found
        {
            remove("Record.txt");                   //remove current file
            rename("copy.txt", "Record.txt");       //rename copy.txt file into Record.txt 
            printf("\n\t\t\t\t\t\tRecord deleted Successfully\n");
        }
        if (!found) //if record not found 
        {
            printf("\n\t\t\t\t\t\tRecord Not Found!!");
        }
        printf("\n\t\t\t\t\t\tDo you want to Search another Product?Press (y/n) : ");
        scanf("%s", &ano);
    } while (ano == 'y' || ano == 'Y');     //use for repeat current operation
}