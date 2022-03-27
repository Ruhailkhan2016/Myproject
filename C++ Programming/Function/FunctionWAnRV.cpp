#include <iostream>
using namespace std;

//with argument no return value

void sum(void)
{
    int a, b, sum;
    int* ptr;

    ptr = &sum ;

    cout <<"Enter Two Numbers : ";
    cin >>a>>b;

    sum = a+b;  //2+2 =4

    *ptr += 1;  //sum is 5

    sum = sum+a;    // sum + 2 = 7
    
    cout<<"sum is : "<< *ptr<<endl;
    cout<<"sum is : "<< sum<<endl;

}

int main()
{

    sum();

}

