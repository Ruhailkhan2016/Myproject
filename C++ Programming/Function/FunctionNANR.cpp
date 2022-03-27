#include <iostream>
using namespace std;

void printline()
	//function no argument and no return value
{
    for (int i = 0; i < 25; i++)
    {
        cout <<"*";
    }

    cout <<"\n";
}

int main()
{
    printline();
    cout <<"Function No argument No Return Value";
    printline();
}
