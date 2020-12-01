#include<iostream>
using namespace std;

int moneyReceived(int money, float factor = 1.04) {
    return money * factor;
}

// Here, factor is a default argument.
// Always initialize default arguments at extreme right. Means, always at last.
// You can change the value of default argument.
// If you makes a variable "const", then, it's value never changes. Like const int a = 1; Here "a can't change".

int main() {

    int money = 100000;
    
    cout << "The money is "<< money << ". After 1 year it is " << moneyReceived(money) << "." << endl;
    cout << "For VIP : The money is "<< money << ". After 1 year it is " << moneyReceived(money, 1.10) << "." << endl;
    
    return 0;
}
