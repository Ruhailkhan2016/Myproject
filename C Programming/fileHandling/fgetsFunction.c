#include <stdio.h>
int main()  
{   
    //In this program read the specified character from the file 
    FILE* ptr = NULL;   

    ptr = fopen("first.txt", "r");

    char str[40];

    fgets(str, 10, ptr); //it will print 4 character 5th character is null character...

    printf("The String is : %s\n", str);

}