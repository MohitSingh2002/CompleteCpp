#include<bits/stdc++.h>
using namespace std;

class BaseClass {

    public:
        int var_base;
        virtual void display() {
            cout << "Variable var_base is : " << var_base << endl;
        }

};

class DerivedClass : public BaseClass{

    int var_derived = 2;
    public:
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
    base_class_pointer->display();
    /*
        I make display function of BaseClass virtual which means, that,
        , if I make an pointer of BaseClass and point it to the object of DerivedClass, then, display function
        of DerivedClass will be called.
    */
    
    return 0;
}
