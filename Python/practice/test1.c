#include <stdio.h>

void printline();
void main()
{
    printf("Welcome c programming\n");
    printline();
}

void printline()
{
    for (int i = 0; i < 10; i++)
    {
        printf("*");
    }
    
}


