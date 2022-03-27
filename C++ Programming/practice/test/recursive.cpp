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

int main()
{   
    cout <<"\n Golden ratio for n = 10 is : "<<GoldenRecursive(1, 10)<<endl;    //upto 10 terms...
}