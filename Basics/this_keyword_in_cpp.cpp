#include<bits/stdc++.h>
using namespace std;

class A {

    int a;

    public:

        void setData1(int a) {
            this->a = a;
        }

        A & setData2(int a) {
            this->a = a;
            return *this;
        }

        void getData()  {
            cout << "The value of a is " << a << endl;
        }

};

int main() {

    A a1;

    a1.setData1(1);
    a1.getData();

    A a2;

    a2.setData2(2).getData();
    
    return 0;
}
