#include<iostream>
using namespace std;

struct user
{
    int id;
    char favChar;
    float salary;
};

typedef struct coderData
{
    int coderID;
    char coderFavouriteChar;
    float coderSalary;
} cd ;

int main() {

    struct user mohit;
    mohit.id = 1;
    mohit.favChar = 'a';
    mohit.salary = 1234567890;

    cout << "The id of mohit is : " << mohit.id << endl;
    cout << "The favChar of mohit is : " << mohit.favChar << endl;
    cout << "The salary of mohit is : " << mohit.salary << endl;

    cd singh;
    singh.coderID = 2;
    singh.coderFavouriteChar = 'b';
    singh.coderSalary = 987654321;

    cout << "The coderID of singh is : " << singh.coderID << endl;
    cout << "The coderFavouriteChar of singh is : " << singh.coderFavouriteChar << endl;
    cout << "The coderSalary of singh is : " << singh.coderSalary << endl;

    return 0;
}
