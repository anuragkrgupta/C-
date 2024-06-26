#include<iostream>
using namespace std;
class pow
{
    int x,y,z=1,i;
    public:
    void powe()
    {
        cout<<"enter the x: ";
        cin>>x;
        cout<<"enter the y: ";
        cin>>y;
        for(i=1;i<=y;i++)
        z=z*x;
        cout<<z;
        
    }
};
int main()
{
    pow s;
    s.powe();
}
