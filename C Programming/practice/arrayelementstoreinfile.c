#include <stdio.h>
#include <stdlib.h>
int main()
{
    //store the array element in file 
    FILE *ptr;

    int arr[5] = {10, 20, 40, 30, 10};

    int sum = 0;
    float avg; 


     ptr = fopen("store.txt", "w");

     if (ptr == NULL)
     {
         printf("Error...File not Found!");
         exit(1);
     }
     
    for (int i = 0; i < 5; i++)
    {
        sum = sum+arr[i];

        fprintf(ptr, "%d ", arr[i]);

    }
    
      avg = sum/5;

     fprintf(ptr, "sum is : %d\n", sum);
     fprintf(ptr, "Avg is : %f", avg);
}