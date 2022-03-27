#include <iostream>
using namespace std;
class Emp
{
private:
    string name;
    int id;

public:
    void getdata()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "\nEnter the id: ";
        cin >> id;
    }
    void disp();
};
void Emp::disp()
{
    cout << "NAme: " << name;
    cout << endl << "Id: " << id;
}

int main()
{
    Emp e1[3];

    for (int i = 0; i < 3; i++)
    {

        e1[i].getdata();
    }

    for (int i = 0; i < 3; i++)
    {
        e1[i].disp();
    }

    return 0;
}