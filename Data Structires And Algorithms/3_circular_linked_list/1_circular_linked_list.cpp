#include<bits/stdc++.h>
#include"1_circular_linked_list_helper.h"
using namespace std;

int main() {

    CircularLinkedList list;

    for(int i=1;i<=5;i++) {
        list.addLast(i);
    }
    for(int i=6;i<=10;i++) {
        list.addFirst(i);
    }

    cout << "The list after above operations are : " << endl;
    list.displayList();

    cout << "The length of the list is : " << list.displayLength() << endl;
    
    return 0;
}
