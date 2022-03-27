#include <stdio.h>
int main()
{
    //In this program we will open a file 
    FILE* ptr;

    ptr = fopen("/home/ruhail/MI-15-EMBEDD/Ruhail/C Programming/fileHandling/first.txt", "r");

    if (ptr == NULL)
    {
        printf("File is not Present\n");
    }
    else
    {
        printf("File opened in read Mode\n");
    }
    
}