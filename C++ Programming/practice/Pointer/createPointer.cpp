#include <iostream>
#include <string.h>
using namespace std;

int main()
{

int arr[3] = {4, 5, 3};

int *ptr;
ptr = arr;

for (int i = 0; i < 3; i++)
{
    // cout << arr[i];
    cout << *(arr+i) << " ";
}

cout <<endl;
// cout << *ptr+1<< endl;

}
