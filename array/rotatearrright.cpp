#include <iostream>
using namespace std;
// sorry left rotate
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << "first element: " << *arr << endl;
    // Store the first element
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;

    // Display rotated array
    cout << "Left Rotated Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
