#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;

int main() {

    string str = "12345";

    stringstream ss(str);

    int x = 0;
    ss >> x;

    cout << "The value of x is : " << x << endl;

    // This work can also be done by "stoi".

    string str2 = "5678";
    cout << stoi(str2) << endl;
    
    return 0;
}
