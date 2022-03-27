#include <iostream>
using namespace std;

int main()
{
    // 3.write a Factorial program using pointer to function.
// int fact(int* fact);
int* ptr;
int num, fact = 1;



cout <<"Enter any Number Which you want to get factorial : ";
cin >>num;

for (int i = 1; i <= num; i++)
{
    
    fact = fact*i;
}
ptr = &fact;
cout <<"Factorial of "<<num<< " is :"<<*ptr<<endl;
return 0;

}

