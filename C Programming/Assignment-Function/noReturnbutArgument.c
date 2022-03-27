#include <stdio.h>

void sum(int, int);     //function declaration

void main()
{
    int a, b;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    sum(a, b);          //functionc alling
}

void sum(int x, int y)      //function defination
{
    int sum;

    sum = x + y;

    printf("Sum of two number is : %d\n", sum);
}