#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE  *ptr;
    
    int size;

    ptr = fopen("info.txt", "r");

    if (ptr == NULL)
    {
        printf("Error...There is no File ");
        exit(1);
    }
    else
    {
        printf("File is open Successfully");
    }

    size = ftell(ptr);
    fseek(ptr, 0, SEEK_END);

    printf("File size is : %d\n", size);
    
}