#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count=0;

class Num {

    public:
        Num() {
            ::count++;
            cout << "Your number now is constructor : " << ::count << endl;
        }

        // Destructor never takes an argument nor returns any value.
        ~Num () { // -----> This is "Destructor" Declaration.
            cout << "Your number now is destructor : " << ::count << endl;
            ::count--;
        }

};

int main() {

    cout << "Main program starts here." << endl;
    cout << "Creating one instanse of Num Class." << endl;
    Num num1;

    {
        cout << "Entering into the block." << endl;
        cout << "Creating two more instanse of Num Class." << endl;
        Num num2, num3;
        cout << "Exiting from the block." << endl;
    }

    cout << "Back again in the main function." << endl;
    
    return 0;
}
