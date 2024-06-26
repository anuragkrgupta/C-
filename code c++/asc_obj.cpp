#include<iostream>
#include<string.h>
using namespace std;
class String{
    char str[30];
    public:
        void getString(){
            cout<<"Enter a string:";
            cin>>str;
        }
        void sortAscending(){
            int i,j;
            char temp;
            int n=strlen(str);
            for(i=0;i<n-1;i++){
                for(j=i+1;j<n;j++){
                    if(str[i]>str[j]){
                        temp=str[i];
                        str[i]=str[j];
                        str[j]=temp;
                    }
                }
            }
            cout<<"String after sorting in ascending order:"<<str<<endl;
        }
};
int main(){
    String s;
    s.getString();
    s.sortAscending();
    return 0;
}
