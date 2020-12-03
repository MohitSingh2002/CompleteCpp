#include<bits/stdc++.h>
using namespace std;

class DynamicArrayStack {
    int *arr, nextIndex, capacity;
    public:
        DynamicArrayStack() {
            capacity = 1;
            nextIndex = 0;
            arr = new int[capacity];
        }
        int size() {
            return nextIndex++;
        }
        bool isEmpty() {
            return nextIndex == 0;
        }
        void push(int value) {
            if(nextIndex == capacity) {
                int *newArr = new int[capacity++];
                for(int i = 0; i < capacity; i++) {
                    newArr[i] = arr[i];
                }
                delete[] arr;
                arr = newArr;
            }
            arr[nextIndex] = value;
            nextIndex++;
        }
        int top() {
            if(isEmpty()) {
                cout << "Stack is empty!" << endl;
                return -1;
            }
            return arr[nextIndex - 1];
        }
        int pop() {
            if(isEmpty()) {
                cout << "Stack is empty!" << endl;
                return -1;
            }
            nextIndex--;
            return arr[nextIndex];
        }
        void printStack() {
            for(int i = nextIndex-1; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};
