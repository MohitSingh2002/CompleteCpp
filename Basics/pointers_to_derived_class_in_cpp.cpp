#include<bits/stdc++.h>
using namespace std;

class BaseClass {

    public:
        int var_base;
        void display() {
            cout << "Variable var_base is : " << var_base << endl;
        }

};

class DerivedClass : public BaseClass{

    public:
        int var_derived;
        void display() {
            cout << "Variable var_base is : " << var_base << endl;
            cout << "Variable var_derived is : " << var_derived << endl;
        }

};

int main() {

    BaseClass *base_class_pointer;
    BaseClass base_class_object;
    DerivedClass derived_class_object;

    base_class_pointer = &derived_class_object;

    base_class_pointer->var_base = 1;
    // base_class_pointer->var_derived = 2;  //  -----> This will throw an error because you can't access derived class members using base class pointer.
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;

    derived_class_pointer = &derived_class_object;

    derived_class_pointer->var_base = 3;
    derived_class_pointer->var_derived = 4;
    derived_class_pointer->display();
    
    return 0;
}
