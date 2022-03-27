#include <iostream>
using namespace std;

//No argument with return value
// int sum();

int sum()
{
    int a, b;
    cout <<"Enter Two Numbers : ";
    cin >>a>>b;


    return a+b;
}

int main()
{
    int res;

  res =  sum();

  cout<<res<<endl;

}

