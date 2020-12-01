#include<iostream>
using namespace std;

class Test {

    int a;
    int b;

    public:
        Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(a + j)
        // Test(int i, int j) : b(j), a(i + b) //  -----> This will create problem as a is initialised first.
        {

            cout << "Constructor Executed" << endl;
            cout << "Value of a is " << a << endl;
            cout << "Value of b is " << b << endl;

        }

};

int main() {

    Test test(1, 2);
    
    return 0;
}
