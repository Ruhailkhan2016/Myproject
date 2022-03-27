#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[20];  
}e;

int main()
{
    // struct employee e;
    
    e.id = 101;

    strcpy (e.name, "Ruhail Khan");

    printf("Employee Id : %d\n",e.id);

    printf("Employee Name : %s\n", e.name);


    return 0;
}