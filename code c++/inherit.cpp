#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"Hii ";
    }
};
class B: public A
{
    public:
    void show()
    {
        cout<<"programmer!";
    }
};
int main()
{
    B ob;
    ob.display();
    ob.show();
    return 0; 
}