#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[20];
    int a;

    printf("Enter 1st String : ");
    scanf("%s",str1);

    printf("Enter 2nd String : ");
    scanf("%s",str2);

    a = strcmp(str1,str2);

    if (a == 0)
    {
        printf("\nString are same : ");    
    }
    
    else

    {
        printf("\nString are not same : ");
    }

    printf("\nString ASCII Diff is : %d\n ",a);
}