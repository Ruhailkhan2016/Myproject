#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = NULL;

    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        printf("Error....");
       
       exit(1);
    }

    int num1, num2, num3;

    fscanf(fp, "%d %d %d", &num1, &num2, &num3);

    

    char ch;
    int count = 1;

    while ((ch = fgetc(fp) != EOF))
    {
        if (ch == '\n')
        {
            count++;
        }
    }
    
    printf("Number of lines is : %d\n", count);
}