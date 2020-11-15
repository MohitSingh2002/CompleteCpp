#include<bits/stdc++.h>
using namespace std;

int main() {

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(-10);
    s.insert(0);
    s.insert(-1);

    cout << "Set elements are : " << endl; // Set automatically arranged it's elements in ascending order. [O(logN)].
    for(int i : s) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Length of the set is : " << s.size() << endl; // It gives the length of the set.

    auto elementAt2Index = s.begin();
    for(int i = 0; i < 2; i++) {
        elementAt2Index++;
    }
    cout << "Element at 2nd index is : " << *elementAt2Index << endl; // s.begin() returns an iterator so I write "*" before elementAt2Index.

    if(s.empty()) { // s.empty() returns true if the set is empty.
        cout << "Set is empty" << endl;
    } else {
        cout << "Set is not empty" << endl;
    }

    // s.clear(); // It deletes all the elements present in the set. [O(N)].

    // s.erase(s.begin()); // Deletes elements at the certain index.

    cout << *(s.find(0)) << endl; // It finds the element. [O(logN)].

    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    cout << "After inserting 5 1's, then, the set becomes : " << endl;
    for(int i : s) {
        cout << i << " ";
    }
    cout << endl; // 5 1's are not added because set does not allow duplicates.
    auto lower = s.lower_bound(1);
    auto upper = s.upper_bound(1);
    cout << "No. of times 1 comes in the set is : " << *(upper)-*(lower) << endl; // It returns 1 only. [O(logN)].
    
    return 0;
}
