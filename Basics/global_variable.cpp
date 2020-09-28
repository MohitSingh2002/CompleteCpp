#include<iostream>
using namespace std;

int c = 45;

int main() {
    int a, b, c;
    cout << "Enter the value of a : " << endl;
    cin >> a;
    cout << "Enter the value of b : " << endl;
    cin >> b;
    c = a + b;
    cout << "The value of local variable c : "<< c << endl;
    cout << "The value of global variable c : "<< ::c << endl; // "::" is called "Scope Resolution Operator". It prints the value of global c.
    cout << "The size of local variable c : "<< sizeof(c) <<endl; // "sizeof" gives the size of the given variable in the brackets.
    int x = 181;
    int & y = x; //Here y is "Reference Variable.". // -----> "Very Important".
    cout << "The value of y : " << y << endl;
    return 0;
}
