#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class ComplexNumber;

class ComplexNumber {

    int a, b;

    // friend int CalculatorFinder :: sumRealComplex(ComplexNumber cn1, ComplexNumber cn2);
    // friend int CalculatorFinder :: sumComplexComplex(ComplexNumber cn1, ComplexNumber cn2);

    friend class CalculatorFinder;

    public:
        void setData(int x, int y) {
            a = x;
            b = y;
        }

        void printData() {
            cout << "Yout number is : " << a << " + " << b << "i" << endl;
        }

};

class CalculatorFinder {

    public:
        int sumOfTwoNumbers(int x, int y) {
            return (x + y);
        }

        int sumRealComplex(ComplexNumber cn1, ComplexNumber cn2);

        int sumComplexComplex(ComplexNumber cn1, ComplexNumber cn2);

};

int CalculatorFinder :: sumRealComplex(ComplexNumber cn1, ComplexNumber cn2) {
    return (cn1.a + cn2.a);
}

int CalculatorFinder :: sumComplexComplex(ComplexNumber cn1, ComplexNumber cn2) {
    return (cn1.b + cn2.b);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ComplexNumber cn1, cn2;

    cn1.setData(1, 2);
    cn1.printData();
    cn2.setData(3, 4);
    cn2.printData();

    CalculatorFinder cf1;

    int real = cf1.sumRealComplex(cn1, cn2);

    cout << "The sum of Real Part is : " << real << endl;

    int complex = cf1.sumComplexComplex(cn1, cn2);

    cout << "The sum of Complex Part is : " << complex << endl;
    
    return 0;
}
