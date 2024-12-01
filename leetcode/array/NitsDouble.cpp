#include <iostream>
#include <vector>
#include <unordered_set>

bool checkIfExist(std::vector<int>& arr) {
    std::unordered_set<int> set; // Create a set to store the elements of the array.
    //unordered_set is an associative container that contains set of unique objects of type Key.
    for (int num : arr) {  //for(num : arr) is a range-based for loop that iterates over all elements of arr.
        if (set.count(2 * num) || (num % 2 == 0 && set.count(num / 2))) {  
            //count() returns 1 if the element is present in the set, otherwise 0.
             return true;
        }
        set.insert(num);
    }
    return false;
}

int main() {
    std::vector<int> arr = {10, 2, 5, 3};
    if (checkIfExist(arr)) {
        std::cout << "Yes, N and its double exist in the array." << std::endl;
    } else {
        std::cout << "No, N and its double do not exist in the array." << std::endl;
    }
    return 0;
}