#include<iostream>
using namespace std;

class a
{
    public:
    void display()
    {
        cout<<"anurag ";
    }
};
class b
{
    public:
    void display1()
    {
        cout<<"kumar ";
    }
};
class c:public a,public b
{
    public:
    void print()
    {
        cout<<"gupta";
    }
};
int main()
{
    c ob;
    ob.display();
    ob.display1();
    ob.print();
    return 0;
}