#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class BankDeposit {

    int principal;
    int years;
    float rate;
    int finalAmount;

    public:

        BankDeposit() {};

        BankDeposit(int p, int y, float r1);

        BankDeposit(int p, int y, int r2);

        void show();

};

BankDeposit::BankDeposit(int p, int y, float r1) {

    principal = p;
    years = y;
    rate = r1;
    finalAmount = principal;

    for(int i = 0; i < years; i++) {
        finalAmount *= (1+rate);
    }

}

BankDeposit::BankDeposit(int p, int y, int r1) {

    principal = p;
    years = y;
    rate = float(r1)/100;
    finalAmount = principal;

    for(int i = 0; i < years; i++) {
        finalAmount *= (1+rate);
    }

}

void BankDeposit :: show() {

    if(years <= 1) {
        cout << "Your Principal Amount is " << principal
        << ". After " << years << " year, your amount is " << finalAmount << "." << endl;
    } else {
        cout << "Your Principal Amount is " << principal
        << ". After " << years << " years, your amount is " << finalAmount << "." << endl;
    }

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    BankDeposit bd1, bd2, bd3;
    int p, y, r2;
    float r1;

    cout << "Enter the values of p, y and r1 : " << endl;
    cin >> p >> y >> r1;
    bd1 = BankDeposit(p, y, r1);
    bd1.show();

    cout << "Enter the values of p, y and r2 : " << endl;
    cin >> p >> y >> r2;
    bd2 = BankDeposit(p, y, r2);
    bd2.show();

    bd3.show();
    
    return 0;
}
