#include<bits/stdc++.h>
#include"1_doubly_linked_list_helper.h"
using namespace std;

int main() {

    DoublyLinkedList list;

    for(int i=1;i<=5;i++) {
        list.addLast(i);
    }

    for(int i=6;i<=10;i++) {
        list.addFirst(i);
    }

    cout << "The list after above operations are : " << endl;
    list.displayList();

    cout << "The length of the list is : " << list.displayLength() << endl;

    cout << "The list after adding 20 at 3rd position is : " << endl;
    list.addAt(3, 20);
    list.displayList();

    cout << "The list after deleting last element is : " << endl;
    list.deleteLast();
    list.displayList();

    cout << "The list after deleting first element is : " << endl;
    list.deleteFirst();
    list.displayList();

    cout << "The element at 4th index is : " << list.at(4) << endl;

    cout << "Is list have 0 ? ";
    if(list.hasElement(0)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
