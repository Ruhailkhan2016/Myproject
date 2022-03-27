#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "My name is ";
    char str2[20] = "Ruhail Khan ";

    printf("Concatenate Two String Are : ");

    strcat(str1, str2);

    printf("\nConcatenate is String is : %s\n", str1);
}