#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class ComplexNumber {

    int a;
    int b;

    public:
        void setData(int x, int y) {
            a = x;
            b = y;
        }

        void setDataBySum(ComplexNumber cn1, ComplexNumber cn2) {
            a = cn1.a + cn2.a;
            b = cn1.b + cn2.b;
        }

        void printData() {
            cout << "Your complex number is : " << a << " + " << b << "i" << endl; 
        }

};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ComplexNumber cn1, cn2, cn3;

    cn1.setData(1, 2);
    cn1.printData();

    cn2.setData(3, 4);
    cn2.printData();

    cn3.setDataBySum(cn1, cn2);
    cn3.printData();

    return 0;
}
