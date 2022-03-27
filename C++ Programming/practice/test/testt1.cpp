#include <iostream>
#include <string.h>
using namespace std;

struct student{

    int roll_no;
    string name;
};

int main()
{
    struct student s1;
    struct student *ptr;

    ptr = &s1;

    cout << "Enter Roll Number : ";
    cin >> ptr-> roll_no;
    

    cout << "Enter Name : ";
    cin >> ptr-> name;

    cout << "Student Roll Number is : \n" << ptr -> roll_no <<"\nStudent Name is : "<< ptr -> name;
    cout <<"\nAddress of s1 is : "<< ptr;

    
} 

