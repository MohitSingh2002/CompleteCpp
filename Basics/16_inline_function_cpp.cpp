#include<iostream>
using namespace std;

inline int product(int x, int y) {
    return x * y;
} 

// What inline do is it puts the code inside the function to it's call.
// As in main function, we defined product(a,b), then, the programs seems like x*y in place of product(a,b).
// Don't use inline if your program's function is too big as it consumes a lot of memory. 

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
