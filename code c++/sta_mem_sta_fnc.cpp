#include <iostream>
using namespace std;

class MyClass {
    static int count;
public:
    MyClass() { count++; }
    ~MyClass() { count--; }
    static int getCount() { return count; }
};

int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    cout << "Number of objects: " << MyClass::getCount() << endl;
    {
        MyClass obj3;
        cout << "Number of objects: " << MyClass::getCount() << endl;
    }
    cout << "Number of objects: " << MyClass::getCount() << endl;
    return 0;
}
