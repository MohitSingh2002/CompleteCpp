#include<bits/stdc++.h>
using namespace std;

void showUnorderedSet(unordered_set<int> s) {
    unordered_set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {

    unordered_set<int> set;
    // What unordered_set do is set elements in random order in the set according to a hash function created inside this unordered_set.
    // This removes duplicates elements and if you want duplicate elements then use unordered_multiset.

    for(int i = 1; i <= 10;i++) {
        set.insert(i); // Inserts element in the set.
    }

    cout << "Unordered Set elements are : " << endl;
    showUnorderedSet(set); // This prints elements in unordered manner and hence proved that hashing is happening.

    cout << "After deleting 9 from unordered_set, unordered_set is : " << endl;
    set.erase(9); // This simply delete the given element.
    showUnorderedSet(set);
    
    cout << "Size of unordered_set is : " << set.size() << endl;

    cout << "Is unordered_set have 3 ? ";
    if(set.find(3) != set.end()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
