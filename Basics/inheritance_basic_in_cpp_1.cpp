#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Employee {

    public:
        int id;
        float salary;

        Employee() {}

        Employee(int employeeID) {
            id = employeeID;
            salary = 2000;
        }

        void printEmployee() {
            cout << "ID : " << id << endl;
        }

};

/*
Derived class syntax:-
class {{derived-class-name}} : {{visuality}} {{base-class-name}}
{

}

visuality is private by default.
If you make visuality private, then, all the public memebers of base class becomes private memebers of derived class.
If you make visuality public, then, all the public memebers of base class becomes public memebers of derived class.
You can't access private memebers of base class. They are never "INHERITED".

*/

class Programmer : public Employee {

    public:
        int languageCode;

        Programmer() {
            languageCode = 9;
        }

        void printProgrammer() {
            cout << "Language Code : " << languageCode << endl;
        }

};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Employee employee1(1);
    employee1.printEmployee();

    Programmer programmer1;
    cout << programmer1.id << endl;
    
    return 0;
}
