#include<bits/stdc++.h>
#include"2_heap_helper.h"
using namespace std;

int main() {
    
    Heap heap;

    heap.push(15);
    heap.push(10);
    heap.push(2);
    heap.push(20);

    cout << "Top Element in the heap is : " << heap.top() << endl;

    cout << "Is heap empty ? : " << heap.isEmpty() << endl;

    while(!heap.isEmpty()) {
        cout << heap.top() << endl;
        heap.pop();
    }
    
    return 0;
}
