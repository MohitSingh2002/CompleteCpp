#include<iostream>
using namespace std;

class Employee {

    int id;
    static int count;
    
    // Initially, the value of any static variable is "zero" i.e., "0".

    public:
        void set_id() {
            cout << "Enter a ID for the Employee : " << endl;
            cin >> id;
            count++;
        }
        static void get_data() {
            cout << "Total Number of Employees are : " << count << endl;
            // You can only use a static variable inside a static function.
            // If you try to use int id; inside this function, then, it shows syntax error.
        }

};

int Employee :: count;
// If you declare a static variable inside a Class then you have to define the above line outside the class.

int main() {

    Employee mohit, mohit1, mohit2;

    mohit.set_id();
    Employee::get_data();

    mohit1.set_id();
    Employee::get_data(); // To access a function of a class you can also write "Employee::get_data();".
    
    mohit2.set_id();
    Employee::get_data();
    
    return 0;
}
