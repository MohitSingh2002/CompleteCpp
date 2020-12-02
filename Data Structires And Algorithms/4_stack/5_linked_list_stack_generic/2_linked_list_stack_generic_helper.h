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
class LinkedListStackGeneric{
    Node<T> *head;
    int length;
    public:
        LinkedListStackGeneric() {
            head = NULL;
            length = 0;
        }
        int size() {
            return length;
        }
        bool isEmpty() {
            return length == 0;
        }
        void push(T value) {
            Node<T> *toAdd = new Node<T>(value);
            toAdd->next = head;
            head = toAdd;
            length++;
        }
        T top() {
            if(isEmpty()) {
                cout << "Stack is Empty!" << endl;
                return 0;
            }
            return head->data;
        }
        T pop() {
            if(isEmpty()) {
                cout << "Stack is Empty!" << endl;
                return 0;
            }
            Node<T> *temp = head;
            T answer = temp->data;
            head = head->next;
            delete temp;
            length--;
            return answer;
        }
        void printStack() {
            Node<T> *temp = head;
            while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};
