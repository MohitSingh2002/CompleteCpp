#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Formal Declaration.

class X;
class Y;

class X {

    int data1;
    friend void swap(X &, Y &);
    friend int add(X, Y);
    public:
        void setValue(int value1) {
            data1 = value1;
        };

        int displayValue() {
            return data1;
        }

};

class Y {

    int data2;
    friend void swap(X &, Y &);
    friend int add(X, Y);
    public:
        void setValue(int value2) {
            data2 = value2;
        };

        int displayValue() {
            return data2;
        }

};

void swap(X & x, Y & y) {

    int temp = x.data1;
    x.data1 = y.data2;
    y.data2 = temp;

}

int add(X x, Y y) {

    return x.data1 + y.data2;

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    X x;
    Y y;

    x.setValue(1);
    y.setValue(2);

    cout << "The value of x below swap is " << x.displayValue() << " and the value of y below swap is " << y.displayValue() << "." << endl;

    swap(x, y);

    cout << "The value of x after swap is " << x.displayValue() << " and the value of y after swap is " << y.displayValue() << "." << endl;

    cout << "The sum of " << x.displayValue() << " and " << y.displayValue() << " is " << add(x, y) << "." << endl;
    
    return 0;
}
