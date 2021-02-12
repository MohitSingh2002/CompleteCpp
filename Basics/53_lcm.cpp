#include<bits/stdc++.h>
using namespace std;

int gcd(int, int);
int lcm(int, int);

int main() {

      cout << "Enter first number : ";
      int a;
      cin >> a;

      
      cout << "Enter second number : ";
      int b;
      cin >> b;

      cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;
      
      return 0;
}

int gcd(int a, int b) {
      if(a == 0) return b;
      if(b == 0) return a;
      return gcd(b, a%b);
}

int lcm(int a, int b) {
      return (a*b)/gcd(a, b);
      // a*b = lcm(a, b)*gcd(a, b)
      // gcd and hcf is same
}
