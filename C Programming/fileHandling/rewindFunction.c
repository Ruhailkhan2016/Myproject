#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;

    char str[50], ch;

    ptr = fopen("rewind.txt", "w+");
    if (ptr == NULL)
    {
        printf("Error.There is no File\n");
        exit(1);
    }

    printf("\ntype Somthing in your file : \n");
    gets(str);
    
    fputs(str, ptr);    //Write String into file using this function.....

    rewind(ptr);    //bring the file pointer ar the beginning at the file 

    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        break;
            printf("%c", ch);
        
    }

    fclose(ptr);
}