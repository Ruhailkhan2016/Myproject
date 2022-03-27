#include <stdio.h>
#include <stdlib.h>
int main()
{
    // In this program we will read a content of file char by char using of fgetc
    FILE *ptr = NULL;

    char str;

    ptr = fopen("first.txt", "r");

    /* char str1 = fgetc(ptr);
    char str2 = fgetc(ptr);


    printf("First character is : %c\n",str1);
    printf("Second character is : %c\n",str2); */
    printf("The content of file is : ");
    while ((str = fgetc(ptr)) != EOF)
    {
       printf("%c",str);
    }
    fclose(ptr);
}