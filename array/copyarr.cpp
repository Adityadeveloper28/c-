#include <iostream>
using namespace std;

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[5];

    // Copy elements
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    // Display copied array
    cout << "Copied Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
