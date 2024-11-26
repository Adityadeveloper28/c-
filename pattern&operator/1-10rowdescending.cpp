#include <iostream>
using namespace std;

int main() {
    int rows = 4; // Number of rows in the pattern
    int num = 1;  // Starting number for the sequence

    for (int i = 1; i <= rows; i++) {
        // For odd rows, numbers are printed in ascending order
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
                num++;
            }
        } 
        // For even rows, numbers are printed in descending order
        else {
            int start = num + i - 1; // Calculate the starting number for descending order
            for (int j = 1; j <= i; j++) {
                cout << start << " ";
                start--;
            }
            num += i; // Adjust num to point to the next starting number
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
