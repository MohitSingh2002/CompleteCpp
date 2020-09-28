#include<iostream>
#include<cstring>
using namespace std;

class Binary {

    string binary;

    public:
        void get_binary();
        void print_string();
        void check_binary();
        void ones_compliment();

};

void Binary :: get_binary() {
    cout << "Enter a binary number : " << endl;
    getline(cin, binary); // To get a string from User Always use "getline(cin, string);".
}

void Binary :: print_string() {
    cout << "The entered binary number is : " << binary << endl;
}

void Binary :: check_binary() {
    for (int i = 0; i < binary.length(); i++) {
        if(binary.at(i) != '0' && binary.at(i) != '1') {
            cout << "The given number is not a valid binary number." << endl;
            break;
        }
    }
    
}

void Binary :: ones_compliment() {
    for (int i = 0; i < binary.length(); i++) {
        if(binary.at(i) == '1') {
            binary.at(i) = '0';
        } else if(binary.at(i) == '0') {
            binary.at(i) = '1';
        }
    }

    cout << "The string after one's compliment is : " << binary << endl;
    
}

int main() {

    Binary b;

    b.get_binary();
    b.print_string();
    b.check_binary();
    b.ones_compliment();
    
    return 0;
}
