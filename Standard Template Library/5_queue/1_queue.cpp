#include<bits/stdc++.h>
using namespace std;

void printQueue(queue<int> q) {
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}

int main() {

    queue<int> list;

    for(int i=1;i<=5;i++) {
        list.push(i);
    }

    cout << "The queue after above operations are : " << endl;
    printQueue(list);

    list.pop();
    cout << "The queue after poping is : " << endl;
    printQueue(list);

    cout << "The size of the queue is : " << list.size() << endl;

    cout << "The top most element of the queue is : " << list.front() << endl;

    cout << "Is queue empty ? ";
    if(list.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
