#include <iostream>
using namespace std;
int main()
{
    int marks;

    cout << "Enter Your marks :";
    cin  >> marks;

    if (marks >= 85)
    {
        cout << "Your Grade  : A\n";
    }

    else if(marks  >= 70 && marks < 85)
    {
        cout << "Your Grade : B\n";
    }

    else if (marks >= 55 && marks < 70)
    {
        cout << "Your Grade : C\n";
    }
    
    else
    {
        cout << "Your Grade : Failed\n";
    }
}