#include<iostream>
using namespace std;
int main()
{

    int a;
    string str= "c++ is a nice language";
    char checkcharacter = checkcharacter;
    
    cout<<"enter the character to find its frequency= ";
    cin>>checkcharacter;
    int count=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==checkcharacter)
        {
            ++ count;
        }
       
    }
     cout<<"frequency of"<<checkcharacter<<"="<<count;
    return 0;
}