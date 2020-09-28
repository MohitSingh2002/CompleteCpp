#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    time_t start, end;

    time(&start);

    int x, y, z;
    cout << "Enter the value of x : " << endl;
    cin >> x;

    cout << "Enter the value of y : " << endl;
    cin >> y;

    z = x + y;

    cout << "The value of z(sum) is : " << z << endl;

    time(&end);

    cout << "Execution time is : " << end-start << endl;

    return 0;
}
