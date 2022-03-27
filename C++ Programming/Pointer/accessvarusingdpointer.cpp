#include <iostream>
using namespace std;

int main()
{
    int* ptr;
    int** dptr;
    int a = 10;

    ptr = &a;

    dptr = &ptr;


    cout << a <<endl;
    cout << *ptr <<endl;
    cout << **dptr <<endl;
    cout << ptr <<endl;
    cout << dptr <<endl;
    cout << *dptr <<endl;
    cout << &ptr <<endl;
    cout << &dptr <<endl;
}