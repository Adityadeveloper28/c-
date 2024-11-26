#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt"); // Create and open a file
    file << "Hello, File Handling in C++!" << endl;
    file.close(); // Close the file

    ifstream readFile("example.txt");
    string line;
    while (getline(readFile, line)) {
        cout << line << endl;
    }
    readFile.close();

    return 0;
}
