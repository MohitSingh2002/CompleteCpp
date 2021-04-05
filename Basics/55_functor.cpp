#include<bits/stdc++.h>
using namespace std;

// Functor --> Functional Object
class Car {
    public:
        void operator()() {
            cout << "Hello in Functor!" << endl;
        }
};

int main() {
    
    Car car;
    car(); // --> car is a object working as a functor
    
    return 0;
}
