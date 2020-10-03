#include<bits/stdc++.h>
#include"1_queue_helper.h"
using namespace std;

int main() {

    Queue list;

    for(int i=1;i<=5;i++) {
        list.enqueue(i);
    }

    cout << "The List after above operation is : " << endl;
    list.displayList();

    cout << "The Length of the list is : " << list.displayLength() << endl;

    list.poll();
    cout << "The List after above operation is : " << endl;
    list.displayList();

    cout << "The first element which is to be replaced first is : " << list.dequeue() << endl;
    cout << "The List after above operation is : " << endl;
    list.displayList();
    
    return 0;
}
