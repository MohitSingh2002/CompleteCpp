#include<bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter a number to check whether it is prime or not : ";
    int num;
    cin >> num;
    bool isPrime = true;
    for(int i = 2; i < num; i++) {
        if(num%i == 0) {
            isPrime = false;
        }
    }

    if(isPrime) {
        cout << "The given number is prime" << endl;
    } else {
        cout << "The given number is not prime" << endl;
    }

    return 0;
}
