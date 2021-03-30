#include<bits/stdc++.h>
using namespace std;

class Heap {

    vector<int> heapVector;
    bool isMinHeap;

    bool checkIfMaxOrMinHeap(int a, int b) {
        if(isMinHeap) {
            return (a < b);
        } else {
            return (a > b);
        }
    }

    void heapify(int i) {
        int left = 2*i;
        int right = 2*i + 1;

        // Assume current is min
        int minIndex = i;
        if((left < heapVector.size()) && checkIfMaxOrMinHeap(heapVector.at(left), heapVector.at(i))) {
            minIndex = left;
        }
        if((right < heapVector.size()) && checkIfMaxOrMinHeap(heapVector.at(right), heapVector.at(minIndex))) {
            minIndex = right;
        }
        if(minIndex != i) {
            swap(heapVector.at(i), heapVector.at(minIndex));
            heapify(minIndex);
        }

    }

    public:
        Heap(bool type = true) {
            isMinHeap = type;
            // Insert -1 at starting of the heap to start indexing from 1
            heapVector.push_back(-1);
        }

        void push(int data) {
            // push this data at the last of the heap vector
            heapVector.push_back(data);
            // Now shift this value to correct heap property
            int index = heapVector.size() - 1;
            int parent = index / 2;

            while((index > 1) && checkIfMaxOrMinHeap(heapVector.at(index), heapVector.at(parent))) {
                swap(heapVector.at(index), heapVector.at(parent));
                index = parent;
                parent = parent / 2;
            }
        }

        bool isEmpty() {
            return heapVector.size() == 1;
        }

        int top() {
            return heapVector.at(1);
        }

        void pop() {
            // Swap first and last index and pop back
            int lastIndex = heapVector.size() - 1;
            int firstIndex = 1;
            swap(heapVector.at(firstIndex), heapVector.at(lastIndex));
            heapVector.pop_back();

            // Arrange items to follow heap properties
            heapify(1);

        }

};
