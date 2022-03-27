#include <stdio.h>
int main()
{   //In this program we have perform both operation write and read, when we will write something in our file, it will replace existing content with that new content only from the beginning and rest text will be same
    FILE* ptr = NULL;

    ptr = fopen("/home/ruhail/MI-15-EMBEDD/Ruhail/C Programming/fileHandling/first.txt", "r+");

    fputs("Hello World", ptr);
}