#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    // Loop over each element in the array starting from the second element
    for (int i = 1; i < n; i++)
    {
        // Store the current element as the key
        int key = arr[i];
        // Initialize j to the index before i
        int j = i - 1;

        // Shift elements of the sorted segment forward to make space for the key
        while (j >= 0 && arr[j] > key)
        {
            // Move the element one position to the right
            arr[j + 1] = arr[j];
            // Decrement j to compare the next element in the sorted segment
            j--;
        }
        // Insert the key in its correct position
        arr[j + 1] = key;
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {12, 11, 13, 15, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);
    cout << "sorted array: ";
    printarray(arr, n);

    return 0;
}