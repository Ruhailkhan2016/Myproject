#include <iostream>
using namespace std;

//Calculate golden ratio upto n terms using Recursive Method....
double GoldenRecursive(double gr, int n)
{
    //calculate  the golden ratio upto 'n' terms
    if(n == 1)  //it means if n == 1
    
        return 1;

    while( n > 0 )  //it will call untill n becomes 0

    return(gr + 1/GoldenRecursive(gr, n-1));    //the golden ratio is calculated and returned
    return(gr);
}

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
    cout <<"\n Golden ratio for n = 10  (Using Recursive) is : "<<GoldenRecursive(1, 10)<<endl;    //upto 10 terms...
    
    cout <<"\n Golden ratio for n = 10  (Using Iteration) is : "<<GoldenIterative(10)<<endl;    //upto 10 terms...
}