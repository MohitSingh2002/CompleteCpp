#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int a = 9;
    int* b = &a;

    cout << "The address of a is : " << &a << endl; // "&" is (address of) Operator.
    cout << "The address of a is : " << b << endl;

    cout << "The value at address b is : " << *b << endl; // "*" is Deference(value at) Operator.

    cout << "Positive of -5 is : " << abs(-5) << endl;

    return 0;
}
