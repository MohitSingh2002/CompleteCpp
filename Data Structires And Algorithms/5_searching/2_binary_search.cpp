#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int element) {
      int low = 0;
      int high = size - 1;
      int mid;
      while (low <= high) {
            mid = (low + high) / 2;
            if(arr[mid] == element) {
                  return mid;
            }
            if(element > arr[mid]) {
                  low = mid + 1;
            } else {
                  high = mid - 1;
            }
      }
      return -1;
}

int main() {

      int arr[] = {1, 12, 43, 74, 85, 96, 117, 128, 189, 210};
      int size = sizeof(arr)/sizeof(arr[0]);
      int element = 85;

      cout << "The element " << element << " is found at " << binarySearch(arr, size, element) << " index." << endl;
      
      return 0;
}
