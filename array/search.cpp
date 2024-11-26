#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 50;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            cout << "Element " << key << " found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }

    return 0;
}
