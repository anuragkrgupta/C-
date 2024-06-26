#include<iostream>
using namespace std;

class a
{
    public:
    void superclass()
    {
        cout<<"superclass"<<endl;
    }
};
class b:public a
{
    public:
    void intermediateclass()
    {
        cout<<"intermidiate class"<<endl;
    }
};
class c:public b
{
    public:
    void subclass()
    {
        cout<<"sub class"<<endl;
    }
};
int main()
{
    c ob;
    ob.superclass();
    ob.intermediateclass();
    ob.subclass();
    return 0;
}