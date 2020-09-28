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

    Node *head = NULL;

};
