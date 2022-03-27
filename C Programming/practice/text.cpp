#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue; // continue statement is used to skip some line of code inside the loop and continue the next itration.......

        cout << i << " ";
        cout << "\n";   
    }
}