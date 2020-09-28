#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Complex {

    int a, b;

    public:

        // This is method overloading in "Constructors".

        Complex() {}
        Complex(int x, int y) {
            a = x;
            b = y;
        }
        Complex(int x) {
            a = x;
            b = 0;
        }
        void printNumber() {
            cout << "Your number is : " << a << " + " << b << "i" << endl;
        }

};

int main() {

    Complex c3;
    c3.printNumber();

    Complex c1(1,2);
    c1.printNumber();

    Complex c2(1);
    c2.printNumber();

    // Complex c3;
    // c3.printNumber();
    
    return 0;
}
