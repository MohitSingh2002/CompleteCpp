#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    time_t start, end;

    time(&start);

    int num1, num2;
    cout << "Enter the value of first number:" << endl; // "<<" is Insertion Operator.
    cin >> num1; // ">>" is Extraction Operator.
    cout << "Enter the value of second number:" << endl;
    cin >> num2;
    cout << "The sum of both the nmbers is : " << num1+num2 << endl;

    time(&end);

    cout << "The Execution time is : " << double(end - start) << endl;

    return 0;
}
