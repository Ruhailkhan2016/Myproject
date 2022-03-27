#include <stdio.h>

long Binary(int);
int main()
{
    long binary;
    int decimal;

    printf("\n\nConvert Decimal to Binary : \n");

    printf("Enter any decimal Number : ");
    scanf("%d", &decimal);

    binary = Binary(decimal);
    printf("\nThe Binary number is : %ld\n\n", binary);

    return 0;
}

long Binary(int decimal)
{
    long binary = 0, remainder, f = 1;

    while (decimal != 0)
    {
        remainder = decimal % 2;

        binary = binary + remainder * f;

        f = f * 10;
        decimal = decimal / 2;
    }
    return binary;
}
