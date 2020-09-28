#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class ComplexNumber {

    int a, b;

    public:
        void setData(int x, int y) {
            a = x;
            b = y;
        }

        // The below code allow sumData function to use ComplexNumber Class private members and private methods.
        // It does not matter use write below code in public or private it works fine without any issue.
        // The below line says the compiler that sumData function can access ComplexNumber Class private members and private methods without any issue.
        friend ComplexNumber sumData(ComplexNumber x, ComplexNumber y);

        void printData() {
            cout << "Yout number is : " << a << " + " << b << "i" << endl;
        }

};

ComplexNumber sumData(ComplexNumber cn1, ComplexNumber cn2) {

    ComplexNumber cn3;
    cn3.setData(cn1.a+cn2.a, cn1.b+cn2.b);
    return cn3;

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ComplexNumber cn1, cn2, cn3;

    cn1.setData(1, 2);
    cn1.printData();

    cn2.setData(3, 4);
    cn2.printData();

    cn3 = sumData(cn1, cn2);
    cn3.printData();
    
    return 0;
}
