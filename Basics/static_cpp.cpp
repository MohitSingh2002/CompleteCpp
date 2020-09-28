#include<iostream>
using namespace std;

int product(int x, int y) {
    static int z = 0;
    z = z + 1;
    return x * y + z;
}

// The line static int z = 0; will run only once. Means it initializes a int z = 0; and save it for future use.

int main() {

    int a, b;
    cout << "Enter two numbers to find their product : " << endl;
    cin >> a >> b;
    cout << "The product of "<<a<<" and "<<b<<" is "<< product(a,b) << endl;
    cout << "The product of "<<a<<" and "<<b<<" is "<< product(a,b) << endl;
    cout << "The product of "<<a<<" and "<<b<<" is "<< product(a,b) << endl;
    cout << "The product of "<<a<<" and "<<b<<" is "<< product(a,b) << endl;
    cout << "The product of "<<a<<" and "<<b<<" is "<< product(a,b) << endl;
    cout << "The product of "<<a<<" and "<<b<<" is "<< product(a,b) << endl;
    cout << "The product of "<<a<<" and "<<b<<" is "<< product(a,b) << endl;
    cout << "The product of "<<a<<" and "<<b<<" is "<< product(a,b) << endl;
    cout << "The product of "<<a<<" and "<<b<<" is "<< product(a,b) << endl;
    cout << "The product of "<<a<<" and "<<b<<" is "<< product(a,b) << endl;

    return 0;
}
