#include<iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex(float r = 0.0, float i = 0.0) {
            real = r;
            imag = i;
        }
        Complex operator*(Complex const &obj) {
            Complex res;
            res.real = real * obj.real - imag * obj.imag;
            res.imag = real * obj.imag + imag * obj.real;
            return res;
        }
        void print() {
            cout << real << " + i" << imag << endl;
        }
};

int main() {
    Complex c1(3.0, 2.0);
    Complex c2(1.0, 7.0);
    Complex c3 = c1 * c2; 
    cout << "Multiplication of ";
    c1.print();
    cout << " and ";
    c2.print();
    cout << " is ";
    c3.print();

    return 0;
}
