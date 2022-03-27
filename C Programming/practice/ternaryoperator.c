#include <stdio.h>
int main()
{
    /*  Its syntax is

     condition ? expression1 : expression2; */

    int age; // variable declaration
    printf("Enter your age : ");
    scanf("%d", &age);                                                                   // taking user input for age variable
    (age >= 18) ? (printf("eligible for voting\n")) : (printf("Not eligible for voting\n")); // conditional operator
}