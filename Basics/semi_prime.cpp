#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    bool isP = true;
    for(int i = 2; i < num; i++) {
        if(num%i == 0) {
            isP = false;
        }
    }
    return isP;
}

int main() {

    cout << "Enter a number to find whether it is semi prime or not : ";
    int num;
    cin >> num;

    bool isSemiPrime = false;

    for(int i = 2; i < num; i++) {
        if((num%i == 0) && isPrime(i)) {
            // cout << "i :" << i << endl;
            int n = num/i;
            if((num%n == 0) && isPrime(n)) {
                // cout << i << " " << n << endl;
                isSemiPrime = true;
            }
        }
    }

    if(isSemiPrime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
