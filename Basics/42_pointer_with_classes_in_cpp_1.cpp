#include<bits/stdc++.h>
using namespace std;

class ShopItem {

    int id;
    float price;

    public:

        void setData(int a, float b) {
            id = a;
            price = b;
        }

        void getData() {
            cout << "The price for id " << id << " is " << price << endl;
        }

};

int main() {

    int sizeOfShopItem = 3;
    ShopItem *shopItem = new ShopItem[3];

    ShopItem *temp = shopItem;

    for(int i = 0; i < sizeOfShopItem; i++) {
        cout << "Please enter the details : " << endl;
        int x;
        float y;
        cout << "Enter ID : ";
        cin >> x;
        cout << "Enter Price : ";
        cin >> y;
        shopItem->setData(x, y);
        shopItem++;
    }

    for(int i = 0; i < sizeOfShopItem; i++) {
        temp->getData();
        temp++;
    }
    
    return 0;
}
