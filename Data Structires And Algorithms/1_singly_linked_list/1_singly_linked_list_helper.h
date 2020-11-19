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
        Node(int value) {
            data = value;
            next = NULL;
        }
};

class CustomList {

    public:
        Node *head = NULL;

        void addLast(int value) {
            Node *toAdd = new Node();
            toAdd->data = value;
            toAdd->next = NULL;
            if(head == NULL) {
                head = toAdd;
            } else {
                Node *temp = head;
                while(temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = toAdd;
            }
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
            if(head == NULL) {
                return 0;
            } else {
                Node *temp = head;
                int length = 0;
                while(temp != NULL) {
                    length++;
                    temp = temp->next;
                }
                return length;
            }
        }

        void addFirst(int value) {
            if(head == NULL) {
                return;
            } else {
                Node *toAdd = new Node();
                toAdd->data = value;
                toAdd->next = head;
                head = toAdd;
            }
        }

        void addAt(int position, int value) {
            Node *toAdd = new Node();
            toAdd->data = value;
            toAdd->next = NULL;
            Node *temp = head;
            Node *previousToTemp = NULL;
            for(int i = 0; i < position; i++) {
                previousToTemp = temp;
                temp = temp->next;
            }
            previousToTemp->next = toAdd;
            toAdd->next = temp;
        }

        void deleteLast() {
            Node *temp = head;
            Node *previousToLast = NULL;
            while(temp->next != NULL) {
                previousToLast = temp;
                temp = temp->next;
            }
            // cout << previousToLast->data << endl;
            previousToLast->next = NULL;
        }

        void deleteFirst() {
            if(head == NULL) {
                return;
            } else {
                Node *temp = head;
                head = temp->next;
                temp->next = NULL;
            }
        }

        void deleteAt(int position) {
            Node *temp = head;
            // Node *previousToTemp = NULL;
            for(int i = 0; i < position-1; i++) {
                // previousToTemp = temp;
                temp = temp->next;
            }
            Node *current = temp->next;
            temp->next = current->next;
            current->next = NULL;
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

        void reverseList() {
            Node *current = head;
            Node *prev = NULL;
            Node *next = NULL;
            while(current != NULL) {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            head = prev;
        }

        void removeDuplicates() {
            Node *temp = head;
            Node *current = head;
            while(temp != NULL && temp->next != NULL) {
                if(temp->data == temp->next->data) {
                    current = temp->next->next;
                    temp->next = current;
                } else {
                    temp = temp->next;
                }
            }
        }

        void removeDuplicatesFromUnsortedList() {
            unordered_set<int> u;
            Node *temp = head;
            Node *prev = NULL;
            while(temp != NULL) {
                if(u.find(temp->data) != u.end()) {
                    prev->next = temp->next;
                    // temp->next = NULL;
                } else {
                    u.insert(temp->data);
                    prev = temp;
                }
                temp = temp->next;
            }
        }

        void lastToFirst() {
            Node *temp = head;
            Node *prev = NULL;
            while(temp->next != NULL) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            temp->next = head;
            head = temp;
        }

        // void addOne() {
        //     int total = 0;
        //     Node *temp = head;
        //     while(temp != NULL) {
        //         total += temp->data;
        //         if(temp->next == NULL) {
        //             total++;
        //         }
        //         temp = temp->next;
        //     }
        //     head->data = total;
        //     head->next = NULL;
        // }
        
        // void reverseWithGap(int k) {
        //     Node *temp = head;
        //     Node *temp1 = head;
        //     for(int i = 0; i < displayLength(); i+=4) {
        //         for(int j = 0; j < 3; j++) {
        //             temp = temp->next;
        //         }

        //     }
        // }

        void deleteNodesHavingGreaterValueOnRight() {
            Node *temp = head;
            while(temp != NULL) {
                if(temp->data > temp->next->data) {
                    temp->next = temp->next->next;
                }
                temp = temp->next;
            }            
        }

        long long listToInt() {
            string str;
            Node *temp = head;
            while(temp != NULL) {
                str.push_back(temp->data + '0');
                temp = temp->next;
            }
            return stoi(str);
        }

};
