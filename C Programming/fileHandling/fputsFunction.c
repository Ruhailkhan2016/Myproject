#include <stdio.h>
int main()
{
    //In this program we have perform write and truncate operation, it means previous content will be remove froom the file and new ontent store in the file
    FILE* ptr = NULL;

    ptr = fopen("first.txt", "w");

    fputs("How are You ", ptr);

    fclose(ptr);
}