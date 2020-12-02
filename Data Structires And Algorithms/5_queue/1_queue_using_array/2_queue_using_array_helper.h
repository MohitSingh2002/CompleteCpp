#include<bits/stdc++.h>
using namespace std;

template <typename T>

class QueueUsingArray{
    T *arr;
    int nextIndex, firstIndex, length, capacity;
    public:
        QueueUsingArray(T capacity) {
            this->capacity = capacity;
            firstIndex = -1;
            nextIndex = 0;
            length = 0;
            arr = new T[capacity];
        }
        int size() {
            return length;
        }
        bool isEmpty() {
            return length == 0;
        }
        void enqueue(T value) {
            if(length == capacity) {
                cout << "Queue is full!" << endl;
                return;
            }
            arr[nextIndex] = value;
            nextIndex = (nextIndex + 1)%capacity;
            length++;
            if(firstIndex == -1) {
                firstIndex = 0;
            }
        }
        T front() {
            if(isEmpty()) {
                cout << "Queue is Empty!" << endl;
                return 0;
            }
            return arr[firstIndex];
        }
        T dequeue() {
            if(isEmpty()) {
                cout << "Queue is Empty!" << endl;
                return 0;
            }
            T answer = arr[firstIndex];
            firstIndex = (firstIndex + 1)%capacity;
            length--;
            if(length == 0) {
                nextIndex = 0;
                firstIndex = -1;
            }
            return answer;
        }
};
