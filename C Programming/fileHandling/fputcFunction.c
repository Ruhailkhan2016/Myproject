#include <stdio.h>
int main()
{   
    //In This program we have write content to given fputc() charracter by character or given fputs() string but there are previous content will be remove when we enter new content
    FILE* ptr =NULL;

    ptr = fopen("first.txt", "w");

    fputc('H',ptr); //print one character

    //fputs("Hello World",ptr);  //print hello world all string it will combine.

    fclose(ptr);
}