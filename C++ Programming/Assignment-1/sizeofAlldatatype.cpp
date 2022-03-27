#include <iostream>

using namespace std;

int main() {
    // 1) Write a program to print size of all datatypes in cpp.
    // we can find the size of each datatypes with the help of sizeof() operator 

    //Syntax : sizeof(datatypes)

    cout << "Type          Size (bytes)" << endl;      
    cout << "Characte      " << sizeof(char) << endl;                // char         = 1 byte 
    cout << "Integer       " << sizeof(int) << endl;                 // int          = 4 byte
    cout << "Long int      " << sizeof(long int) << endl;            // long         = 8 byte
    cout << "Float         " << sizeof(float) << endl;               // float        = 4 byte
    cout << "Double        " << sizeof(double) << endl;              // double       = 8 byte
    cout << "Long double   " << sizeof(long double) << endl;         // loung double = 16 byte

    return 0;
}