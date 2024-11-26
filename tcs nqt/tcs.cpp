#include <iostream>

int main() {
    //tcs nqt question dsa based
    //mplement a binary search algorithm
    //binary search algorithm
    int arr[] = {2, 3, 4, 10, 40}; //array
    int n = sizeof(arr) / sizeof(arr[0]); //size of array output 5
    int x = 10; //element to be searched
    int l = 0; //leftmost index of array
    int r = n - 1; //rightmost index of array
    while (l <= r) {  //iterative binary search algorithm
        int m = l + (r - l) / 2; //mid index of array 
        if (arr[m] == x) { // Check if x is present at mid=2
            std::cout << "Element found at index " << m << std::endl; //if element found
            return 0;
        }
        if (arr[m] < x) { // If x greater, ignore left half
            l = m + 1; //if element is greater than mid, then it can only be present in right subarray
        } else { // If x is smaller, ignore right half
            r = m - 1;  //if element is smaller than mid, then it can only be present in left subarray
        }
    }
    std::cout << "Element not found" << std::endl;//if element not found
    return 0;
}