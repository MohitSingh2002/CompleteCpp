#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n) {
      for(int i=n-1;i>=0;i--) {
            for(int j=0;j<i;j++) {
                  if(arr[j] > arr[j+1]) {
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                  }
            }
      }
}

// Time Complexity for BubbleSort is O(n^2).
// In this, the largest element is shifted to the last and this is done in every traversal.
// This Algorithm doesn't see the last element (after shifted).

int main() {

      int arr[] = {4, 2, 6, 8, 7, 9, 4};

      int arraySize = sizeof(arr)/sizeof(arr[0]);

      bubbleSort(arr, arraySize);

      for (int i = 0; i < arraySize; i++) cout << arr[i] << " ";
      
      return 0;
}
