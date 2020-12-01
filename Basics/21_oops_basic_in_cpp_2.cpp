#include<iostream>
using namespace std;

class Shop {

    int itemID[100];
    int itemPRICE[100];
    int counter;

    public:
        void initCounter() {
            counter = 0;
        }
        void setData();
        void displayData();

};

void Shop :: setData() {
    cout << "Enter ID for no. " << counter + 1 << " : " << endl;
    cin >> itemID[counter];
    cout << "Enter PRICE for no. " << counter + 1 << " : " << endl;
    cin >> itemPRICE[counter];
    counter++;
}

void Shop :: displayData() {
    for (int i = 0; i <counter; i++) {
        cout << "The PRICE at ID : " << itemID[i]  << " is " << itemPRICE[i] << endl;
    }
}

int main() {

    Shop apniDukkan;
    
    apniDukkan.initCounter();
    apniDukkan.setData();
    apniDukkan.setData();
    apniDukkan.setData();
    apniDukkan.setData();
    apniDukkan.setData();
    apniDukkan.displayData();
    
    return 0;
}
