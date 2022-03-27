#include <iostream>
using namespace std;

// Calculate golden ratio upto n terms using Iterative function....
double GoldenIterative(int n)
{
    double initial = 1;     //intially it its ratio is 1 (for 1 term)

    for (int i = 1; i < n; ++i)
    {
        initial = 1 + 1/initial;    //next term will be the sum of 1 and reciprocal of 1/ res....
    }
    
    return initial; //return result;
}


int main()
{   
    cout <<"\n Golden ratio for n = 10 is : "<<GoldenIterative(10)<<endl;    //upto 10 terms...
}