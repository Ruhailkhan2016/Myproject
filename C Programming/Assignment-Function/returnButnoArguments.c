#include <stdio.h>

//function No argument with return value.....
int sum();  //no argument                  //function declaration

int main()
{   
    int num;
    
    num = sum();            //function calling
    printf("Sum of two Number is : %d\n", num);
}


int sum()                   //function defination
{
    int a, b, c;

    printf("Enter Two numbers : ");
    scanf("%d%d", &a, &b);

    c = a+b;
    return (c);     //witth return value


}