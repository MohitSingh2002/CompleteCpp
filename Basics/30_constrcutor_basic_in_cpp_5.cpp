#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Number {

    int number;

    public:
        Number() {}

        Number(int data) {
            number = data;
        }

        // The below function is called "Copy Constructor".
        Number(Number & data) {
            cout << "Copy Constructor Called !!!!!" << endl;
            number = data.number;
        }
        // By the way, C++ automatically have this copy constructor functionality. So, their is no need to write the above lines of code.
        // "When no copy constructor is found, compiler supplies its own copy constructor".

        void displayNumber() {
            cout << "Your Number is : " << number << endl;
        }

};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Number number1, number2, number3;

    number1 = Number(1);
    number1.displayNumber();

    number2 = Number(number1); // -----> Copy Constructor invoked.
    number2.displayNumber();

    // number3 = number1; // -----> Copy Constructor not called.
    // number3.displayNumber();
    
    Number number4 = number1; // -----> Copy Constructor invoked.
    number4.displayNumber();
    
    return 0;
}
