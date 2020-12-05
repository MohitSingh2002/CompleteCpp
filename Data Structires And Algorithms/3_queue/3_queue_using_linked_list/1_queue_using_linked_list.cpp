#include<bits/stdc++.h>
#include "2_queue_using_linked_list_helper.h"
using namespace std;

int main() {

    QueueUsingLinkedList<int> queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);

    cout << "Size of Queue is : " << queue.size() << endl;

    cout << "First element in the queue which will be removed first is : " << queue.dequeue() << endl;

    cout << "First element after dequeue operation is : " << queue.front() << endl;

    cout << "Is the queue empty ? " << queue.isEmpty() << endl;
    
    return 0;
}
