#include<bits/stdc++.h>
using namespace std;

class StackArray {

    int *arr;
    int nextIndex;
    int capacity;

    public:
        StackArray(int totalSize) {
            arr = new int[totalSize];
            nextIndex = 0;
            capacity = totalSize;
        }

        int size() {
            return nextIndex++;
        }

        bool isEmpty() {
            return nextIndex == 0;
        }

        void push(int value) {
            if(nextIndex == capacity) {
                cout << "Stack is full" << endl;
                return;
            }
            arr[nextIndex] = value;
            nextIndex++;
        }

        int top() {
            if(isEmpty()) {
                cout << "Stack Empty" << endl;
                return -1;
            }
            return arr[nextIndex - 1];
        }

        int pop() {
            if(isEmpty()) {
                cout << "Stack Empty" << endl;
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
