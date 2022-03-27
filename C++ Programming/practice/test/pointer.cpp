#include <iostream>
using namespace std;

int main()
{
    int* ptr;

    void *var;

    int a = 10;

    var = &a;

    ptr = (int *)var;

    // cout <<*((int*)var)<<endl;
    cout <<*ptr<<endl;

}