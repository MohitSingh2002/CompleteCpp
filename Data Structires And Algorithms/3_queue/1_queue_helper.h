#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node() {
            data = 0;
            next = NULL;
        }
};

class Queue {
    Node *front = NULL;
    Node *rear = NULL;
    int length = 0;
    public:
        bool isEmpty() {
            return length == 0;
        }
        int displayLength() {
            return length;
        }
        void enqueue(int value) {
            Node *toAdd = new Node();
            toAdd->data = value;
            if(isEmpty()) {
                front = toAdd;
            } else {
                rear->next = toAdd;
            }
            rear = toAdd;
            length++;
        }
        void displayList() {
            Node *temp = front;
            while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        int dequeue() {
            if(isEmpty()) {
                return NULL;
            }
            int answer = front->data;
            front = front->next;
            if(front == NULL) {
                rear = NULL;
            }
            length--;
            return answer;
        }
        void poll() {
            if(isEmpty()) {
                return;
            }
            front = front->next;
            if(front == NULL) {
                rear = NULL;
            }
            length--;
        }
};
