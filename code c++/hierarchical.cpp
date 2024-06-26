#include<iostream>
using namespace std;

class a
{
    public:
    virtual int add(int x,int y)=0;
};
class b:public a{
    public:
    int add(int x,int y){
    return x+y;}
};
class c:public a{
    public:
    int add(int x,int y){
    return x-y;}
};
int main()
{
    int x,y;
    b ob;
    cout<<"enter the number";
    cin>>x>>y;
    cout<<ob.add(x,y)<<endl;
    c ob1;
    cout<<ob1.add(x,y)<<endl;
    return 0;
}