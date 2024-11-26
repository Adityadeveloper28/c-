#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    int num = 1;

    for (int i = 1; i <= n; ++i) {      // Loop for rows
        for (int j = 1; j <= i; ++j) {  // Loop for columns
            cout << num++ << " ";       // Post-increment: Print first, then increment
        }
        cout << endl;
    }
//print pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
//print pattern odd row in ascending and even rows indecending order 
//1
//3 2
//4 5 6
//10 9 8 7

for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
                num++;
            }
        } else {
            int start = num + i - 1;
            for (int j = 1; j <= i; j++) {
                cout << start << " ";
                start--;
            }
            num += i;
        }
        cout << endl;
    }
    return 0;
}
