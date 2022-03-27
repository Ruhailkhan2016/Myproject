#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Enter case ";
    cin >> ch;

    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

    cout <<ch<< " You Entered vowel\n";

        break;

    default:
    cout << "Your Enter Consonant\n";
        break;
    }
}