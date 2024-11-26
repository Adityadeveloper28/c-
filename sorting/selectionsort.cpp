#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    // Loop over each element in the array except the last one
    for (int i = 0; i < n - 1; i++) {
        // Assume the current position i is the smallest
        int minIndex = i;
        // Loop over the unsorted elements to find the actual smallest element
        for (int j = i + 1; j < n; j++) {
            // If a smaller element is found, update minIndex
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the smallest element found with the element at position i
        swap(arr[i], arr[minIndex]);
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
