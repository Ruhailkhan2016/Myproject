#include <iostream>
using namespace std;

//with argument and with return value

int sum(int, int);

int main()
{
    int a, b;

    cout<<"Enter two numbers : ";
    cin >>a>>b;

    cout <<sum(a, b);

}

int sum(int x, int y)
{
    return x+y;
}