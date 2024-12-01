#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle; //vector of vectors to store the triangle values in each row and column respectively

        // for (int i = 0; i < numRows; i++) {
        //     vector<int> row(i + 1, 1); //initialize the row with 1s of size i+1
        //     for (int j = 1; j < i; j++) {
        //         row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; //calculate the values of the row using the previous row values
        //     }
        //     triangle.push_back(row);
        // }
            for (int i = 0; i < numRows; i++) {
                vector<int> row(i + 1, 1); //initialize the row with 1s of size i+1
                for(int j=1; j<i;j++){
                    row[j] = triangle[i-1][j-1] + triangle[i-1][j]; //calculate the values of the row using the previous row values
                }
                triangle.push_back(row);
            }

    return triangle;
}

void printTriangle(const vector<vector<int>>& triangle) {
    for (const auto& row : triangle) { //iterate through the triangle vector and print the values of each row
        for (int num : row) { 
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    vector<vector<int>> triangle = generate(numRows); //vector of vectors to store the triangle values in each row and column respectively
    printTriangle(triangle);

    return 0;
}