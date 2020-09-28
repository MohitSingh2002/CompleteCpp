#include<bits/stdc++.h>
#include"1_singly_linked_list_helper.h"
using namespace std;

int main() {

    CustomList list;

    for(int i=1;i<=5;i++) {
        list.addLast(i);
    }
    for(int i=6;i<=10;i++) {
        list.addFirst(i);
    }
    cout << "List after above operations is : " << endl;
    list.displayList();

    cout << "The length of the list is " << list.displayLength() << endl;

    list.deleteLast();
    cout << "List after delete last element is : " << endl;
    list.displayList();

    list.deleteFirst();
    cout << "List after delete first element is : " << endl;
    list.displayList();

    list.addAt(2, 20);
    cout << "List after adding 20 at 2nd position is : " << endl;
    list.displayList();

    list.deleteAt(3);
    cout << "List after deleteing element at 3rd position is : " << endl;
    list.displayList();
    
    cout << "The value at 4th position is : " << list.at(4) << endl;

    cout << "Is list have 20 ? ";
    if(list.hasElement(20)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
