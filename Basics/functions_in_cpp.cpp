#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b) {

    int c = a + b;

    return c;

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cout << "Enter First Number : " << endl;
    cin >> x;
    cout << "Enter Second Number : " << endl;
    cin >> y;

    cout << "The sum of both the numbers is : " << sum(x, y) << endl;

    return 0;

}
