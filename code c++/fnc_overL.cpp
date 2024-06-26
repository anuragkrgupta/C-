#include<iostream>
using namespace std;

class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }
        int subtract(int a, int b) {
            return a - b;
        }
        int multiply(int a, int b) {
            return a * b;
        }
        float divide(float a, float b) {
            return a / b;
        }
};

int main() {
    Calculator cal;
    int num1 = 10, num2 = 5;
    cout << "Addition of " << num1 << " and " << num2 << " is: " << cal.add(num1, num2) << endl;
    cout << "Subtraction of " << num1 << " and " << num2 << " is: " << cal.subtract(num1, num2) << endl;
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << cal.multiply(num1, num2) << endl;
    cout << "Division of " << num1 << " and " << num2 << " is: " << cal.divide(num1, num2) << endl;

    return 0;
}
