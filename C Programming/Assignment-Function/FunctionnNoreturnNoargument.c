#include <stdio.h>
//function without argument and without return value....

void printline(void); //no argument      //function declration
int main()
{
    printline();       //function calling
    printf("\nWelcome to C Programming\n");
    printline();
    printf("\n");
}


void printline()    //function defination
{
    for (int i = 1; i < 40; i++)
    {
        printf("*");
    }

    //no return value
}