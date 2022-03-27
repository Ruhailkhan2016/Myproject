#include <stdio.h>
int main()
{
    int arr[10];
    int len = sizeof(arr) / sizeof(arr[0]);

    puts("Orignal array : ");
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }

    puts("reverse array is : ");

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }

    printf("\nLength of Array is : %d\n", len);
}
