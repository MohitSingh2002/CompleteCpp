#include<bits/stdc++.h>
#include"1_stack_helper.h"
using namespace std;

int main() {

    Stack list;

    for(int i=1;i<=5;i++) {
        list.push(i);
    }
    cout << "The list after above operation is : " << endl;
    list.displayList();

    cout << "The list after pop is : " << endl;
    list.pop();
    list.displayList();

    cout << "The top most element is : " << list.peek() << endl;

    cout << "The length of the list is : " << list.displayLength() << endl;

    cout << "Is the list empty ? ";
    if(list.isEmpty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
