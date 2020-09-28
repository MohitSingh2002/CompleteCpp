#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Point;

class Point {

    int x, y;

    friend int findDistance(Point, Point);

    public:
        Point(int a, int b) { // This is parametorized constructor with arguments.
            x = a;
            y = b;
        }

        void displayPoint() {
            cout << "(" << x << "," << y << ")" << endl;
        }

};

int findDistance(Point p1, Point p2) {
    int answer = (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y);
    return sqrt(answer);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Point point1, point2;

    // Implicit Call ----->
    Point point1(1, 2);
    point1.displayPoint();

    // Explicit Call ----->
    Point point2 = Point(3, 4);
    point2.displayPoint();

    cout << "The distance between these two points is " << findDistance(point1, point2) << endl;
    
    return 0;
}
