#include<iostream>
using namespace std;

int main() {

    int array[] = {1, 2, 3, 4, 5};
    int* p = array;

    // cout << *(p+1);

    cout << "The value at *p is : " << *p << endl;
    cout << "The value at *(p+1) is : " << *(p+1) << endl;
    cout << "The value at *(p+2) is : " << *(p+2) << endl;
    cout << "The value at *(p+3) is : " << *(p+3) << endl;

    return 0;
}
