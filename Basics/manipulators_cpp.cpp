#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int a = 3, b = 78, c = 1233;
    cout << "The value of a without setw is:"<<a<<endl;
    cout << "The value of b without setw is:"<<b<<endl;
    cout << "The value of c without setw is:"<<c<<endl;

    // "endl" is a manipulator in C++. It's work is to make a new line in the output.

    cout << "The value of a without setw is:"<<setw(4)<<a<<endl;
    cout << "The value of b without setw is:"<<setw(4)<<b<<endl;
    cout << "The value of c without setw is:"<<setw(4)<<c<<endl;

    // "setw" is a manipulator in C++. It's work is to set the width to a number present in the brackets. It is present in #include<iomanip>.

    return 0;
}
