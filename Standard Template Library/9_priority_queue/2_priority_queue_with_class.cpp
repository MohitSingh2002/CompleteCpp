#include<bits/stdc++.h>
using namespace std;

class Car {
    int i, x, y;
    public:
        Car(int i, int x, int y) {
            this->i = i;
            this->x = x;
            this->y = y;
        }
        int distance() {
            return x*x + y*y;
        }
        void printCar() {
            cout << "i : " << i << ", x : " << x << ", y : " << y << endl;
        }
};

class CarCompare {
    public:
        bool operator()(Car a, Car b) {
            return a.distance() > b.distance(); // Use > in case of min heap and < in case of max heap.
        }
};

int main() {
    
    priority_queue<Car, vector<Car>, CarCompare> queue;

    int x[8] = {5, 6, 17, 18, 9, 11, 0, 3};
    int y[8] = {1, -2, 8, 9, 10, 91, 1, 2};

    for(int i = 0; i < 8; i++) {
        Car car(i, x[i], y[i]);
        queue.push(car);
    }

    while(!queue.empty()) {
        Car car = queue.top();
        car.printCar();
        queue.pop();
    }
    
    return 0;
}
