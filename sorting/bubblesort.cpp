#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
  // sorting array
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      // swap elements
      /// with condition
      if (arr[j] > arr[j + 1]) {
        // swapping
        swap(arr[j], arr[j + 1]);
        // learned swapping
      }
    }
  }
  
}
void printarray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubblesort(arr, n);
  cout << "sorted array: ";
  printarray(arr, n);
}