#include <stdio.h>
#include <stdio.h>

union Student
{ 
    int id;
    char name[100];
    char address[100];
    int  mobileNumber;

};

int main()
{
    union Student e;

    printf("Enter Student Id            : ");
    scanf("%d", &e.id);

    printf("Enter Student Name          : ");
    scanf("%s", e.name);

    printf("Enter Student Address       : ");
    scanf("%s", e.address);

    printf("Enter Student Mobile Number : ");
    scanf("%d", &e.mobileNumber);

    printf("\n\n==============================================\n\n");
    printf("\nStudent Id : %d, \nStudent Name : %s, \nStudent Address : %s, \nStudent Mobile Number : %d\n ", e.id, e.name, e.address, e.mobileNumber);

}