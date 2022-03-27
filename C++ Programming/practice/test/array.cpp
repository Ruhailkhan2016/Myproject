#include <iostream>
using namespace std;

int main()
{   
    // int* var;

    void* ptr;

    int a = 10;

    ptr = &a;

    // var = (int *) ptr;

   cout<<*((int*)ptr)<<endl;



}