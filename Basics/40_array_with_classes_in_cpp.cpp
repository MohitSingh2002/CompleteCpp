#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Employee {

    int id;
    int salary;

    public:
        void setID() {
            salary = 2000;
            cout << "Enter The ID of the Employee : " << endl;
            cin >> id;
        }

        void getID() {
            cout << "The ID of the Employee is : " << id << endl;
        }

};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Employee mohit[5];

    int arraySize = sizeof(mohit)/sizeof(mohit[0]);

    for(int i = 0; i < arraySize; i++) {
        mohit[i].setID();
        mohit[i].getID();
    }

    for(int i = 0; i < arraySize; i++) {
        // mohit[i].setID();
        mohit[i].getID();
    }

    return 0;
}
