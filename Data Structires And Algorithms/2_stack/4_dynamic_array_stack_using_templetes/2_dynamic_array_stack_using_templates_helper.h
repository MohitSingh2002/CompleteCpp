#include<bits/stdc++.h>
using namespace std;

template <typename T>

class DynamicArrayStackUsingTemplates{
    T *arr;
    int nextIndex, capacity;
    public:
        DynamicArrayStackUsingTemplates() {
            capacity = 1;
            nextIndex = 0;
            arr = new T[capacity];
        }
        bool isEmpty() {
            return nextIndex == 0;
        }
        int size() {
            return nextIndex++;
        }
        void push(T value) {
            if(nextIndex == capacity) {
                T *newArr = new T[capacity++];
                for(int i = 0; i < capacity; i++) {
                    newArr[i] = arr[i];
                }
                delete[] arr;
                arr = newArr;
            }
            arr[nextIndex] = value;
            nextIndex++;
        }
        T top() {
            if(isEmpty()) {
                cout << "Stack is Empty!" << endl;
                return 0;
            }
            return arr[nextIndex-1];
        }
        T pop() {
            if(isEmpty()) {
                cout << "Stack is Empty!" << endl;
                return 0;
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
