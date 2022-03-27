#include <stdio.h>
int main()
{
    /* int arr[7] = {11, 22, 33, 44, 55, 66, 77};

    for (int i = 0; i < 7; i++)
    {
        printf("index[%d] : value is : %d and address is %d\n", i, arr[i], &arr[i]);
    }
     */

    int *p;
   int arr[7] = { 11, 22, 33, 44, 55, 66, 77 } ;
   p = arr;
   for ( int i = 0 ; i<7 ; i++ )
   {
      printf(" Index[%d]: value is : %d\n", i, *(p+i));
   }
}