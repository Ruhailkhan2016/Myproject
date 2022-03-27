#include <stdio.h>
int main()
{
    //Access the array element using pointer...
    int data [5] = {10, 15, 20, 7, 6};

    for(int i = 0; i < 5; i++)

    {
            printf("Index of [%d]: %d\n",i, *(data + i));
    }
    return 0;
}