#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{

    protected:
        int roll_number;

    public:
        void set_roll_number(int);
        void get_roll_number();    

};

void Student :: set_roll_number(int n) {
    roll_number = n;
}

void Student :: get_roll_number() {
    cout << "The roll number is : " << roll_number << endl;
}

class Exam : public Student {

    protected:
        int mathematics;
        int physics;

    public:
        void set_marks(int, int);
        void get_marks();    

};

void Exam :: set_marks(int m, int p) {
    mathematics = m;
    physics = p;
}

void Exam :: get_marks() {
    cout << "Marks in Mathematics is : " << mathematics << endl;
    cout << "Marks in Physics is : " << physics << endl;
}

class Result : public Exam {

    public:
        void display_result() {
            get_roll_number();
            get_marks();
            cout << "Your Percentage Is : " << float(mathematics + physics)/2 << endl;
        }

};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Result mohit;

    mohit.set_roll_number(1);
    mohit.set_marks(95, 66);
    mohit.display_result();
    
    return 0;
}
