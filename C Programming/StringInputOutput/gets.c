#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10];

    printf("Enter any string : ");
    gets(str1); //get() this function is used to input only string type of values. it takes more input that it is supposed to take  

    int len = strlen(str1);
    printf("Length of String is : %d\n",len);
}