#include <stdio.h>

int a = 10;

int main()
{
    int a = 20;
    {
        // printf("a is %d\n", a);
        // printf("a is %d\n", a);

         extern int a;   //if we have two variable with same name, first variable we have in globly and second is localy if we want to print both variable value so we can use extern keyword....

        printf("%d\n", a);
    }
        printf("%d\n", a);
}