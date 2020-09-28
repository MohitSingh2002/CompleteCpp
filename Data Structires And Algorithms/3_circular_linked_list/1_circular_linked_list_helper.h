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
        Node(int data) {
            this->data = data;
            next = NULL;
        }

};

class CircularLinkedList {

    public:
        Node *last = NULL;
        int length = 0;

        void addLast(int value) {
            Node *toAdd = new Node();
            toAdd->data = value;
            if(last == NULL) {
                last = toAdd;
                last->next = last;
            } else {
                toAdd->next = last->next;
                last->next = toAdd;
                last = toAdd;
            }
            length++;
        }

        void addFirst(int value) {
            Node *toAdd = new Node();
            toAdd->data = value;
            if(last == NULL) {
                last = toAdd;
            } else {
                toAdd->next = last->next;
            }
            last->next = toAdd;
            length++;
        }

        void displayList() {
            Node *first = last->next;
            while(first != last) {
                cout << first->data << " ";
                first = first->next;
            }
            cout << first->data << " ";
            cout << endl;
        }

        int displayLength() {
            return length;
        }

};
