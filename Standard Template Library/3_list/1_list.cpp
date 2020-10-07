#include<bits/stdc++.h>
#include<list>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    list<int> list1 = {1, 2, 3, 4, 5}; // Created a list.

    list<int>::iterator it1 = list1.begin();
    list1.insert(it1, 100); // It will add 100 before the iterator pointing to a element given in the first argument.
    // First Argument -> iterator pointing to the index you want to add the element.
    // Second Argument -> the element you want to insert.
    // 100 1 2 3 4 5 -> final list.

    for(int i : list1) {
        cout << i << " ";
    }
    cout << endl;

    list1.insert(list1.begin(), 5, 10); // It will add 10, 5 times before the iterator pointing to a element given in the first argument.
    // First Argument -> iterator pointing to the index you want to add the element.
    // Second Argument -> how many times you want to insert.
    // Third Argument -> the element you want to insert.
    // 10 10 10 10 10 100 1 2 3 4 5 -> final list.
    for(int i : list1) {
        cout << i << " ";
    }
    cout << endl;

    list<int> list2 = {10, 20, 30, 40, 50};
    list2.insert(list2.begin(), list1.begin(), list1.end()); // It will add elements from start to end of list1 before list2.
    // 10 10 10 10 10 100 1 2 3 4 5 10 20 30 40 50 -> final list.
    for(int i : list2) {
        cout << i << " ";
    }
    cout << endl;

    list<int> list3;
    for(int i=1;i<=5;i++) {
        list3.push_back(i); // Add element at the last of the list3.
    }
    cout << "The List after adding elements from 1 to 5 in the last of the list3 is : " << endl;
    // 1 2 3 4 5
    for(int i : list3) {
        cout << i << " ";
    }
    cout << endl;
    for(int i=6;i<=10;i++) {
        list3.push_front(i); // Add element at the front of the list3.
    }
    cout << "The List after adding elements from 6 to 10 in the front of the list3 is : " << endl;
    // 10 9 8 7 6 1 2 3 4 5
    for(int i : list3) {
        cout << i << " ";
    }
    cout << endl;

    list3.pop_back();
    cout << "The List after deleting a element from the last of the list3 is : " << endl;
    // 10 9 8 7 6 1 2 3 4
    for(int i : list3) {
        cout << i << " ";
    }
    cout << endl;

    list3.pop_front();
    cout << "The List after deleting a element from the front of the list3 is : " << endl;
    // 9 8 7 6 1 2 3 4
    for(int i : list3) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Is list3 empty ? ";
    if(list3.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "The size of the list3 is : " << list3.size() << endl;

    cout << "The first element in the list3 is " << list3.front() << " and the last element in the list3 is " << list3.back() <<endl;

    list3.reverse(); // This will reverse the list3.
    cout << "The list after reversing the list3 is : " << endl;
    // 4 3 2 1 6 7 8 9
    for(int i : list3) {
        cout << i << " ";
    }
    cout << endl;

    list3.sort(); // This will sort the list3 in the ascending order.
    cout << "The list after sorting the list3 is : " << endl;
    // 1 2 3 4 6 7 8 9
    for(int i : list3) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
