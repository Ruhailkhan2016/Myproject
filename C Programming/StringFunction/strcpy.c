#include <stdio.h>
#include <string.h>
int main()
{
    char str1 [20] = "C Programming";
    char str2 [20];

    // copying str1 to str2
    strcpy(str2, str1);

    printf("Copy String is : %s\n", str2);

}