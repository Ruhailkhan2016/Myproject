#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];

    printf("Enter Any String : ");
    scanf("%s", str);

    int len = strlen(str);

    printf("Your String is : %s\n", str);
    printf("Length of String is : %d\n", len);
}