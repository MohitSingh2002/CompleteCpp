#include<bits/stdc++.h>
using namespace std;

int main() {
    
    priority_queue<int> queue; // priority queue is same as heap

    queue.push(15);
    queue.push(10);
    queue.push(2);
    queue.push(20);
    queue.push(7);

    while(!queue.empty()) {
        cout << queue.top() << endl;
        queue.pop();
    }

    // By default priority queue is max heap
    // To convert priority queue in min heap use --> priority_queue<int, vector<int>, greater<int>> queue;
    
    return 0;
}
