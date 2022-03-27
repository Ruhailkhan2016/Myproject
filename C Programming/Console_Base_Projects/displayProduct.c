#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void display() // this function is used for display All Product records....
{
    FILE *ptr;

    ptr = fopen("Record.txt", "rb");        //File open in reading binary mode
    if (ptr == NULL)
    {
        printf("\t\t\t\t\t\tError : File Not Found!");
    }
    printf("\n\t\t\t\t\t\t <------------> PRODUCT INFORMATION <------------> \n");      //Display all Products
    printf("\n\t\t\t\t\t\t------------------------------------------------------------------------------------------\n\t\t\t\t\t\t Product Id     |      Product Name      |      Product Quantity      |      Date\n\t\t\t\t\t\t------------------------------------------------------------------------------------------\n\n");

    while (fread(&s, sizeof(s), 1, ptr)) // fread() function is used for read binary data

        printf("\t\t\t\t\t\t %d \t                   %s                      %d                   %s\n", s.id, s.product_name, s.quantity, s.date);
    printf("\n\t\t\t\t\t\t--------------------------------------------------------------\n");
    fclose(ptr);
}
