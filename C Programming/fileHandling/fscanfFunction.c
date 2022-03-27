#include <stdio.h>
#include <stdlib.h>
int main()
{
    // fscanf() function is used to read formatted text, number, character from the file....
    FILE *ptr;
    ptr = fopen("first.txt", "w");

    fprintf(ptr,"This is our test file");

    fclose(ptr);
    
    char str [50];

    ptr = fopen("first.txt", "r");

    while (fscanf(ptr, "%s", str) != EOF);
    {
        printf("%s\n", str);
    }

    fclose(ptr);
}