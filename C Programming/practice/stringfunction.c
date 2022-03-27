#include <stdio.h>
#include <string.h>
int main()
{
    // char str1[100];
    char str2[100];


   /*  printf("Enter String1 : ");
    gets(str1); */

    printf("Enter string2 : ");
    gets(str2, 10, stdin);
    // scanf("%s", str2);

    int len = strlen(str2);
    printf("Length of string is : %d\n",len);

}