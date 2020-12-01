#include<iostream>
using namespace std;

class Base1 {

    protected:
        int base1;

    public:
        Base1(int a) {
            base1 = a;
            cout << "Base1 Class constructor called." << endl;
        }

        void displayDataBase1() {
            cout << "Value of base1 is : " << base1 << endl;
        }    

};

class Base2 {

    protected:
        int base2;

    public:
        Base2(int a) {
            base2 = a;
            cout << "Base2 Class constructor called." << endl;
        }

        void displayDataBase2() {
            cout << "Value of base2 is : " << base2 << endl;
        }    

};

class Derived : public Base1, public Base2 {

    int derived1, derived2;

    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b) {
            derived1 = c;
            derived2 = d;
            cout << "Derived Class constructor called." << endl;
        }

        void displayDataDerived() {
            cout << "Value of derived1 is : " << derived1 << endl;
            cout << "Value of derived2 is : " << derived2 << endl;
        }

};

int main() {

    Derived mohit(1, 2, 3, 4);

    mohit.displayDataBase1();
    mohit.displayDataBase2();
    mohit.displayDataDerived();
    
    return 0;
}

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
