#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Base1 {

    protected:
        int base1int;

    public:
        void setbase1int(int a) {
            base1int = a;
        }    

};

class Base2 {

    protected:
        int base2int;

    public:
        void setbase2int(int a) {
            base2int = a;
        }    

};

class Base3 {

    protected:
        int base3int;

    public:
        void setbase3int(int a) {
            base3int = a;
        }    

};

class Derived : public Base1, public Base2, public Base3 {

    public:
        void display_data() {
            cout << "The value of base1int is : " << base1int << endl;
            cout << "The value of base2int is : " << base2int << endl;
            cout << "The value of base3int is : " << base3int << endl;
            cout << "The sum of base1int, base2int and base3int is : " << base1int + base2int + base3int << endl;
        }

};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Derived derived;

    derived.setbase1int(1);
    derived.setbase2int(2);
    derived.setbase3int(3);
    derived.display_data();
    
    return 0;
}
