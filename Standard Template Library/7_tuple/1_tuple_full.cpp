#include<bits/stdc++.h>
using namespace std;

int main() {

    tuple<int, int, int> tuple1; // A tuple can store 3 objects or we can say 3 data types.
    tuple<int, string, string> tuple2;

    tuple1 = make_tuple(1, 2, 3);
    tuple2 = make_tuple(4, "C++", "Java");

    int first_number;
    string first_string, second_string;

    tie(first_number, first_string, second_string) = tuple2; // Assign values of tuple2 to the given data types.

    cout << first_number << " " << first_string << " " << second_string << endl;
    
    return 0;
}
