#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    

    puts("Enter Any string : ");
    
    fgets(str, 20, stdin);

   int len = strlen(str);

    printf("You String is : %s", str);
    printf("Length of String is : %d\n", len);
}