#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    vector<int> vec;
    for(int i = 5; i >= 0; i--) {
        if(i == 3) {
            for(int j = 0; j < 5; j++) {
                vec.push_back(3); // It will add a value at the end of the vector.
            }
        } else {
            vec.push_back(i);
        }
    }

    vec.push_back(8);
    vec.push_back(10);
    vec.push_back(9);

    cout << "The vector elements before sorting are : " << endl;
    for(int i=0;i<vec.size();i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    sort(vec.begin(), vec.end()); // O(NlogN)
    // 0 1 2 3 3 3 3 3 4 5 8 9 10

    cout << "The vector elements after sorting in increasing order are : " << endl;
    // for(int i=0;i<vec.size();i++) {
    //     cout << vec[i] << " ";
    // }
    for(int x: vec) {
        cout << x << " ";
    }
    cout << endl;

    auto it1 = lower_bound(vec.begin(), vec.end(), 3); // vector<int>::iterator can also be replaced with "auto" keyword;
    auto it2 = upper_bound(vec.begin(), vec.end(), 3);

    cout << "No. of times 3 comes is : " << it2 - it1 << endl;

    sort(vec.begin(), vec.end(), greater<int>()); // Sort in decreasing order. [O(NlogN)].
    // 10 9 8 5 4 3 3 3 3 3 2 1 0

    cout << "The vector elements after sorting in decreasing order are : " << endl;
    // for(int i=0;i<vec.size();i++) {
    //     cout << vec[i] << " ";
    // }
    vector<int>::iterator it0;
    for(it0 = vec.begin();it0 != vec.end();it0++) {
        cout << *it0 << " ";
    }
    cout << endl;

    vector<int>::iterator it3 = lower_bound(vec.begin(), vec.end(), 3, greater<int>());
    vector<int>::iterator it4 = upper_bound(vec.begin(), vec.end(), 3, greater<int>());

    cout << "No. of times 3 comes is : " << it2 - it1 << endl;

    cout << "The value at index 2 is : " << vec.at(2) << endl; // Gives the value at certain index.

    cout << "First Value of the vector is : " << vec.front() << endl; // Gives the first value of the vector. [O(1)].
    cout << "Last Value of the vector is : " << vec.back() << endl; // Gives the last value of the vector. [O(1)].

    cout << "First Value of the vector is : " << *(vec.begin()) << endl; // It returns the iterator pointing to the first value of the vector. [O(1)].
    cout << "Last Value of the vector is : " << *(vec.end()-1) << endl; // It returns the iterator pointing to the last value of the vector. [O(1)].
    // It points to the next value of the last element of the vector. That's why I write a "-1".

    cout << "The length/size of the vector is : " << vec.size() << endl;

    cout << "Total number of elements vector can hold before allocating more memory is : " << vec.capacity() << endl;

    // vec.clear(); // It will delete all the elements present in the vector. [O(N)].

    cout << "Did vector is empty ? " << vec.empty() << endl; // Returns 0 if false and 1 if true.

    // vector<int>::iterator it5 = vec.end()-1;
    // vec.erase(it5); // It delete the element at certain position.
    // vec.end() returns an iterator so stored in it5 and, then, put in erase function.
    // If you want to erase in a certain range, then, just give an another argument like "vec.erase(firstRange, LastRange)";

    // vec.insert(vec.begin()+1, 1); // It insert 1 at 1th position. [O(N)].
    // First argument is the position where you want to insert the value.
    // Second argument is the value you want to insert.
    // For position, always add vec.begin() then add the position like "vec.begin()+2".

    // vec.insert(vec.begin(), 2, 4);
    // It will insert 4, 2 times at the front position.
    // First argument is the position, second argument is the times(size) you want to add the value and the third argument is the value.

    // vec.pop_back(); // Removes element at the last position.

    // reverse(vec.begin(), vec.end()); // It will reverse the vector. [O(N)].
    
    
    return 0;
}
