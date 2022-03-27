#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int len;
    // len = sizeof(arr) / sizeof(arr[0]);

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

    // printf("Length of Array is : %d\n", len);
}
