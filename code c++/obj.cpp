#include<iostream>
using namespace std;

class test{
    int objno;
    static int objCnt;

public:
    test(){
        objno = ++objCnt;
    }

    ~test(){
        --objCnt;
    }

    void printObjNumber(void){
        cout<< "Object number: " << objno << "\n";
    }

    static void printObjCount(void){
        cout<< "Object count: " << objCnt << "\n";
    }
};

int test::objCnt = 0;

int main(){
    test t1, t2;
    test::printObjCount();

    test t3;
    test::printObjCount();

    t1.printObjNumber(); 
    t2.printObjNumber(); 
    t3.printObjNumber();

    return 0;
}
