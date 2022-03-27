#include <stdio.h>
int main()
{
    //In this program we have perform append operation, it means whatever we will write content in the file, it will append after the previous content.
    FILE* ptr = NULL;

    ptr = fopen("/home/ruhail/MI-15-EMBEDD/Ruhail/C Programming/fileHandling/first.txt", "a+");

    fputs(".Where are you from ",ptr);
}