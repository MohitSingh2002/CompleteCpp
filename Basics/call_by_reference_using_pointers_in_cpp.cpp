#include<bits/stdc++.h>
using namespace std;

//This will not swap x and y.
void swap(int a, int b) {

    int temp = a;
    a = b;
    b = temp;

}

//This is call by refernece using pointers.
void swapPointer(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;

}

//This is call by refernece using C++ refernece variables. // C++ refernece variables points to the variable which is equal to this reference variable.
//Like int & y = x;
void swapReference(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 4, y = 5;

    cout << "The value of x and y before swap is " << x << " and " << y << "." << endl;

    // swap(x, y); // -----> This will not swap x and y.

    // swapPointer(&x, &y); // -----> This will swap x and y.

    swapReference(x, y);

    cout << "The value of x and y after swap is " << x << " and " << y << "." << endl;

    return 0;

}
