#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Base1 {

    public:
        void say() {
            cout << "How are you :)" << endl;
        }

};

class Base2 {

    public:
        void say() {
            cout << "Kaise ho bhaiya :)" << endl;
        }

};

class Derived : public Base1, public Base2 {

    public:
        void say() {  // ------> This is called "ambigitous resolution". If our base class have similar funtions, then, we have to make that function in the "derived class". 
            Base1::say();
        }

};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Base1 base1;
    base1.say();

    Base2 base2;
    base2.say();

    Derived derived;
    derived.say();
    
    return 0;
}
