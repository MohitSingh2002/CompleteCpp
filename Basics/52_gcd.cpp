#include<bits/stdc++.h>
using namespace std;

int gcdUsingEuclideanMethodOfSubtraction(int, int);
int gcdUsingEuclideanMethodOfDivision(int, int);
int gcdExtendedEuclideanAlgorithm(int, int, int *, int *);

int main() {

      cout << "Enter first number : ";
      int a;
      cin >> a;

      cout << "Enter second number : ";
      int b;
      cin >> b;

      // cout << "GCD of " << a << " and " << b << " is : " << gcdUsingEuclideanMethodOfSubtraction(a, b) << endl;
      // cout << "GCD of " << a << " and " << b << " is : " << gcdUsingEuclideanMethodOfDivision(a, b) << endl;

      int x = 0, y = 0;
      cout << "GCD of " << a << " and " << b << " is : " << gcdExtendedEuclideanAlgorithm(a, b, &x, &y) << " and x = " << x << " and y = " << y << endl;

      return 0;
}

int gcdUsingEuclideanMethodOfSubtraction(int a, int b) {
      if(a == 0) return b;
      if(b == 0) return a;
      if(a == b) return a;
      if(a>b) return gcdUsingEuclideanMethodOfSubtraction(a-b, b);
      else return gcdUsingEuclideanMethodOfSubtraction(a, b-a);
} // Time Complexity is O(n)

int gcdUsingEuclideanMethodOfDivision(int a, int b) {
      if(a == 0) return b;
      if(b == 0) return a;
      return gcdUsingEuclideanMethodOfDivision(b, a%b);
} // Time Complexity is O(logn)

int gcdExtendedEuclideanAlgorithm(int a, int b, int *x, int *y) {
      if(b ==0 ) {
            *x = 1;
            *y = 0;
            return a;
      }
      int x1, y1;
      int result = gcdExtendedEuclideanAlgorithm(b, a%b, &x1, &y1);

      *x = y1;
      *y = x1 - (a/b)*y1;

      return result;
} // It is use in Modular Multiplicative Inverse
