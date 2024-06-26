#include<iostream>
using namespace std;
class add
{
    int x,y,z;
public:
    void aa()
    {
        cout<<"enter two number";
        cin>>x>>y;
        z=x+y;
        cout<<z;
    }

};

    int main()
    {
    add s;
    s.aa();
}