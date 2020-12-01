#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b); // This is function prototyping.
// Function Prototyping assures compiler that the function is present in the program.
//It is declared as "type function_name(arguments);"

// int sum(int, int); // -----> It's also Acceptable. 

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cout << "Enter First Number :" << endl;
    cin >> x;
    cout << "Enter Second Number :" << endl;
    cin >> y;

    // x and y are Actual Parameters.

    cout << "The sum of both the numbers is : " << sum(x, y) << endl;

    return 0;

}

int sum(int a, int b) {

    // Formal Parameters a and b are taking values from Actual Parameters x and y.

    int c = a + b;

    return c;

}
