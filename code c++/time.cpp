#include<iostream>
using namespace std;
class time
{
    int hrs,min;
public:
void gettime (int h,int m)
{hrs = h;
min = m;
}
void puttime()
{
cout<<hrs<<"hours and ";
cout<<min<<"minutes";
}
void sum(time,time);
};
void time::sum(time t1,time t2)
{
    min=t1.min+t2.min;
    hrs=min/60;
    hrs=min%60;
    hrs=hrs+t1.hrs+t2.hrs;
}
int main()
{
    time t1 , t2, t3;
    t1.gettime(2,40);
    cout<<"time 1:";
    t1.puttime();
    t2.gettime(3,75);
    cout<<"\ntime 2:";
    t2.puttime();
    t3.sum(t1,t2);
    cout<<"\ntime3: ";
    t3.puttime();
}