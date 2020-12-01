#include<iostream>
using namespace std;

union user
{
    int id;
    char favChar;
    float salary;
};


int main() {

    union user mohit;
    mohit.id = 1;
    cout << mohit.id << endl;
    mohit.favChar = 'a';
    cout << mohit.id << endl;

    //We can define only one type at a time in union. Like in this case, if first we set id to 1 then we set favChar to 'a' then if we 
    //try to print id then we get a garbage value.

    return 0;
}
