#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node{
    public:
        T data;
        Node *next;
        Node(T data) {
            this->data = data;
            next = NULL;
        }
};

template <typename T>
class QueueUsingLinkedList{
    Node<T> *head, *tail;
    int length;
    public:
        QueueUsingLinkedList() {
            head = NULL;
            tail = NULL;
            length = 0;
        }
        int size() {
            return length;
        }
        bool isEmpty() {
            return length == 0;
        }
        void enqueue(T value) {
            Node<T> *toAdd = new Node<T>(value);
            if(isEmpty()) {
                head = toAdd;
                tail = toAdd;
                length++;
                return;
            }
            tail->next = toAdd;
            tail = toAdd;
            length++;
        }
        T front() {
            if(isEmpty()) {
                return 0;
            }
            return head->data;
        }
        T dequeue() {
            if(isEmpty()) {
                return 0;
            }
            T answer = head->data;
            Node<T> *temp = head;
            head = head->next;
            length--;
            delete temp;
            return answer;
        }
};
