#include <iostream>
using namespace std;

class overload {
public:
    void display(int x) {
        cout << "value of x = " << x;
    }

    void display(double x) {
        cout << "\nvalue of x = " << x;
    }

    void display(int x, int y) {
        cout << "\nvalues of x and y = " << x << ", " << y;
    }
};

int main() {
    double decimal;
    int integer, number;
    overload ob;

    cout << "Enter an integer: ";
    cin >> integer;
    ob.display(integer);

    cout << "Enter a decimal number: ";
    cin >> decimal;
    ob.display(decimal);

    cout << "Enter two numbers: ";
    cin >> number >> integer;
    ob.display(number, integer);

    return 0;
}
