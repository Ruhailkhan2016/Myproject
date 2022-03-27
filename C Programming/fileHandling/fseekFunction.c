#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    int size;

    int content;

    ptr = fopen("first.txt", "r");
    if (ptr == NULL)
    {
        printf("Error...File Not Found!");
        exit(1);
    }
    else
    {
        printf("File Found");
    }

    size = ftell(ptr);

    fseek(ptr, 0, SEEK_END);

    printf("\nFile Size is : %d\n", content);
    
}