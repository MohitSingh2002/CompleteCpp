#include<bits/stdc++.h>
using namespace std;

template <typename T>

class QueueUsingDynamicArray{
    T *arr;
    int nextIndex, firstIndex, length, capacity;
    public:
        QueueUsingDynamicArray() {
            capacity = 5;
            length = 0;
            firstIndex = -1;
            nextIndex = 0;
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
                T *newArr = new T[capacity*2];
                int j = 0;
                for(int i = firstIndex; i < capacity; i++) {
                    newArr[j] = arr[i];
                    j++;
                }
                for(int i = 0; i < firstIndex; i++) {
                    newArr[j] = arr[i];
                    j++;
                }
                firstIndex = 0;
                nextIndex = capacity;
                delete[] arr;
                arr = newArr;
                capacity *= 2;
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
