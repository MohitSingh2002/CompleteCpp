#include<bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node *next;
    public:
        Node() {
            data = 0;
            next = NULL;
        }
        Node(int data) {
            this->data = data;
            next = NULL;
        }
        friend class Stack;
};

class Stack {
    Node *top = NULL;
    int length = 0;
    public:
        void push(int value) {
            Node *toAdd = new Node();
            toAdd->data = value;
            toAdd->next = top;
            top = toAdd;
            length++;
        }
        void pop() {
            top = top->next;
            length--;
        }
        int peek() {
            return top->data;
        }
        int displayLength() {
            return length;
        }
        void displayList() {
            Node *temp = top;
            while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        bool isEmpty() {
            return length == 0;
        }
};
