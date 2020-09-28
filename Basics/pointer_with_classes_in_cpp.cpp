#include<iostream>
using namespace std;

class Complex {

    int real;
    int imaginary;

    public:
        
        void setData(int a, int b) {
            real = a;
            imaginary = b;
        }

        void printData() {
            cout << "Value of real part is : " << real << endl;
            cout << "Value of imaginary part is : " << imaginary << endl;
        }

};

int main() {

    Complex complex;

    Complex *ptr = &complex;

    (*ptr).setData(1, 2);
    // (*ptr).printData();

    ptr->printData();  //  -----> This is called "arrow operator";

    Complex *p = new Complex;

    p->setData(3, 4);
    p->printData();

    Complex *p1 = new Complex[2];

    for(int i=0;i<=1;i++) {
        (p1+i)->setData(i, i+1);
        (p1+i)->printData();
    }
    
    return 0;
}
