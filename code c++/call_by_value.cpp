#include<iostream>
using namespace std;
 void changvalue(int num)
 {
    num=num+10;
    cout<<num<<endl;

 }
 main()
 {
    int num=100;
    cout<<num<<endl;
    changvalue(num);
    cout<<num<<endl;
 }