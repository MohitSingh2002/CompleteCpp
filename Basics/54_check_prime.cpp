#include<bits/stdc++.h>
using namespace std;

bool isPrime(int);

int main() {

      cout << "Enter a number : ";
      int n;
      cin >> n;

      cout << "Entered number " << n << " is";
      if(isPrime(n)) cout << " a prime number." << endl;
      else cout << " not a prime number." << endl;

      return 0;
}

bool isPrime(int n) {
      for(int i=2;i<=sqrt(n);i++) {
            if(n%i == 0) {
                  return false;
            }
      }
      return true;
} // Time Complexity is O(sqrt(n))
