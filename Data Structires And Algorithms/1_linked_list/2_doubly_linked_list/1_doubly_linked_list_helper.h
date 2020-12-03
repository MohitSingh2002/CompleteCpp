#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node *previous;
        Node() {
            data = 0;
            next = NULL;
            previous = NULL;
        }
        Node(int value) {
            data = value;
            next = NULL;
            previous = NULL;
        }
};

class DoublyLinkedList {
    public:

        Node *head;

        DoublyLinkedList() {
            head = NULL;
        }

        DoublyLinkedList(Node *node) {
            head = node;
        }

        void addLast(int value) {
            Node *toAdd = new Node();
            toAdd->data = value;
            if(head == NULL) {
                head = toAdd;
            } else {
                Node *temp = head;
                while(temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = toAdd;
                toAdd->previous = temp;
            }
        }

        void addFirst(int value) {
            Node *toAdd = new Node();
            toAdd->data = value;
            if(head == NULL) {
                head = toAdd;
            } else {
                head->previous = toAdd;
                toAdd->next = head;
                head = toAdd;
            }
        }

        void addAt(int position, int value) {
            Node *toAdd = new Node();
            toAdd->data = value;
            Node *current = head;
            Node *prev = NULL;
            for(int i = 0; i < position; i++) {
                prev = current;
                current = current->next;
            }
            prev->next = toAdd;
            toAdd->previous = prev;
            toAdd->next = current;
            current->previous = toAdd;
        }

        void displayList() {
            Node *temp = head;
            while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        int displayLength() {
            int length = 0;
            Node *temp = head;
            while(temp != NULL) {
                length++;
                temp = temp->next;
            }
            return length;
        }

        void deleteLast() {
            Node *temp = head;
            Node *prev = NULL;
            while(temp->next != NULL) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            temp->previous = NULL;
        }

        void deleteFirst() {
            Node *temp = head;
            head = temp->next;
            temp->next = NULL;
        }

        int at(int position) {
            Node *temp = head;
            for(int i = 0; i < position; i++) {
                temp = temp->next;
            }
            return temp->data;
        }

        bool hasElement(int value) {
            for(int i = 0; i < displayLength(); i++) {
                if(at(i) == value) {
                    return true;
                    break;
                }
            }
            return false;
        }

        // void reverseList() {
        //     Node *current = head;
        //     Node *p = NULL;
        //     Node *n = NULL;
        //     while(current != NULL) {
        //         n = current->next;
        //         current->next = p;
        //         p->next = current;
        //         n->previous = NULL;
        //         p = current;
        //         current = n;
        //     }
        //     head = p;
        // }

        void allPairsWithSum(int x) {
            Node *temp1 = head;
            Node *temp2 = head;
            while(temp2->next != NULL) {
                temp2 = temp2->next;
            }
            while(temp1 != NULL) {
                if((temp1->data + temp2->data) == x) {
                    cout << "(" << temp1->data << ", " << temp2->data << ")" << endl;
                }
                temp1 = temp1->next;
                temp2 = temp2->previous;
            }
        }

};
