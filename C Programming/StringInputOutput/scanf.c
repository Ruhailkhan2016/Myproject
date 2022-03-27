#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];  //size of str is 20 that means we can print only 19 character

    printf("Enter any name : ");
    scanf("%s\n", str1);    //scanf() function reads the sequence of character until it incounter white space like(space, newline, tab etc)

    int len = strlen(str1); //lenth function strlen()

    printf("Length of String is : %d\n",len); //here we print the output using printf() function
}