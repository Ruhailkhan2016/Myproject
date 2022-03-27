#include <iostream>
using namespace std;

int main()
{
    int* ptr, a = 10;

    ptr = &a;

    cout << a <<endl;
    cout << &a <<endl;
    cout << *ptr <<endl;
    cout << ptr <<endl;
    cout << &ptr <<endl;
}