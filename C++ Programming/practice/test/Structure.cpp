#include <iostream>
using namespace std;

struct student
{
    int roll_no;
    char college[20];
    char course[20];
};

int main()
{
    struct student data[2];

    for (int i = 0; i < 2; i++)
    {

        cout << "Enter Student Roll Number   : ";
        cin >> data[i].college;
        cout << "Enter Student College       : ";
        cin >> data[i].college;
        cout << "Enter Student Course Name   : ";
        cin >> data[i].course;

        cout << "\n----------------------------------";
        cout << "\nStudent name is            : " << data[i].roll_no;
        cout << "\nStudent College name is    : " << data[i].college;
        cout << "\nStudent Course name is     : " << data[i].college;

        cout << "\n\n";
    }
}
