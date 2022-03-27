#include <iostream>
using namespace std;
struct rectangle
{
    int w;
    int h;
    
    int area()
    {
        cout<<"\nArea of Rectangle: ";
        return (h*w);
    }
};
int main() {
    struct rectangle rec[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter height and width for rectangle: "<<i;
        cin>>rec[i].w;
        cin>>rec[i].h;
    }
    for(int i=0;i<2;i++)
    {
        cout<<"\n";
        cout<<"Area of Rectangle "<<i;
        cout<<(rec[i].w*rec[i].h);
        cout<<endl;
    }
    
     return 0;
}