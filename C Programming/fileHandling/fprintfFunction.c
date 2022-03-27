#include <stdio.h>
int main()
{
    //In this program we can write formatted text in the file and if in the file have already content, that content will be remove and store new content...
    FILE* ptr = NULL;
    char str[20];
    ptr = fopen("first.txt", "w");

fprintf(ptr ,"This is the example of fprintf() function %s", str);

    fclose(ptr);
}