#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student {

    protected:
        int roll_number;

    public:
        void set_roll_number(int a) {
            roll_number = a;
        }

        void display_roll_number() {
            cout << "Roll Number is : " << roll_number << "." << endl;
        }    

};

class Marks : virtual public Student {

    protected:
        int mathematics;
        int physics;

    public:
        void set_marks(int a, int b) {
            mathematics = a;
            physics = b;
        }

        void display_marks() {
            cout << "Your Marks in Mathematics is " << mathematics << " and in Physics is " << physics << "." << endl;
        }    

};

class Score : virtual public Student {

    protected:
        int score;

    public:
        void set_score(int a) {
            score = a;
        }

        void display_score() {
            cout << "Your Marks in Physical Education is " << score << "." << endl;
        }    

};

class Result : public Marks, public Score {

    public:
        void display_result() {
            display_roll_number();
            display_marks();
            display_score();
            cout << "Your total marks are : " << mathematics + physics + score << "." << endl;
        }

};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Result result_of_mohit;

    result_of_mohit.set_roll_number(1);
    result_of_mohit.set_marks(95, 68);
    result_of_mohit.set_score(80);
    result_of_mohit.display_result();
    
    return 0;
}
