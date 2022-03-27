#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];

    printf("Enter any String : ");

    fgets(str, 20, stdin);

    int len = strlen(str);
    printf("\n\nYour String is : %s\n", str);
    printf("Length of String is : %d\n", len);
}