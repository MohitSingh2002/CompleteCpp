#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int element) {
      for(int i = 0; i < size; i++) {
            if(arr[i] == element) return i;
      }
      return -1;
}

int main() {

      int arr[] = {1, 23 ,4, 54, 543, 43, 54, 12, 80};
      int size = sizeof(arr)/sizeof(arr[0]);
      int element = 54;

      cout << "The element " << element << " is found at " << linearSearch(arr, size, element) << " index." << endl;
      
      return 0;
}
