#include <stdio.h>
//function with return value and with argument....
int sum(int, int);  //with argument   //function declaration

int main()
{
    int a, b, c;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    c = sum(a, b);                 //function calling
    printf("Sum of two number is : %d\n", c);
}

int sum(int x, int y)               //function defiantion
{
    int z;

    z = x + y;

    return (z);     //with return value
}