#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 50, 20, 40, 30};
    int max = arr[0], min = arr[0];
    cout << max << min << endl;
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
