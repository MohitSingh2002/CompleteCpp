#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    
    pair<int, int> pair1, pair2;

    pair1 = make_pair(1, 2); // Creates a pair both of type int. 
    pair2 = make_pair(3, 4);

    cout << pair1.first << endl;
    cout << pair1.second << endl;
    cout << pair2.first << endl;
    cout << pair2.second << endl;

    pair<int, string> pair3; // Creates a pair one of type int and another of the type string.

    pair3 = make_pair(5, "C++");

    cout << pair3.first << endl;
    cout << pair3.second << endl;

    // if(pair1 == pair2) {
    //     cout << "pair1 is equal to pair2" << endl;
    // }

    // if(pair1 != pair3) {
    //     cout << "pair1 is not equal to pair3" << endl;
    // }

    return 0;
}
