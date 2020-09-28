#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex {

    int data1;
    int data2;

    public:

        // Creating a Constructor.
        // Constructor is a special member function with the same name as of the class.
        // It is used to initialize the objects of its class.
        // It is automatically invoked whenever an object is created.
        Complex(void); // Constructor Declaration.

        void printData() {
            cout << "Your Number is : " << data1 << " + "<< data2 << "i" << endl;
        }

};

Complex :: Complex(void) {  // -----> This is default constructor as it takes no arguments.
    data1 = 1;
    data2 = 2;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Complex complex;

    complex.printData();
    
    return 0;
}

/*  Characteristics of Constructors

1>. It should be declared in the public section of the class. 
2>. They are automatically invoked whenever the object is created.
3>. They cannot return values and do not have return types.
4>. It can have default arguments. 
5>. We cannot refer to their address.

*/
