#include<iostream>
using namespace std;
class you
{
    int a,b;
    public:
    void add()
    {
    cout<<"enter the 1st number: ";
    cin>>a;
    cout<<"enter the 2nd number";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
    }
};
int main()
{
    you s;
    s.add();
}