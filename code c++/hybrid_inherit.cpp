#include<iostream>
using namespace std;

class a
{
    public:
    void display()
    {
        cout<<"hii ";
    }
};
class b:public a{
    public:
    void display1()
    {
        cout<<"anurag ";

    }
};
class c:public a{
    public:
    void display2()
    {
        cout<<"kumar ";
    }
};
class d:public b,public c
{
    public:
    void display3()
    {
        cout<<"gupta";
    }
};
int main()
{
    b ob;
    ob.display();
    d ob1;
    ob1.display1();
    ob1.display2();
    ob1.display3();
    return 0;
}