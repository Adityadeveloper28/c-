#include <iostream>
#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1; // Define the search space [left, right] inclusive of both ends
    while (left <= right) { // While the search space is not empty (left <= right) 
        int mid = left + (right - left) / 2; // Calculate the middle element of the search space
        if (nums[mid] == target) {   // If the target is found, return the index of the target element 
            return mid;               // as it is the correct position to insert the target element
        } else if (nums[mid] < target) {    // If the target is greater than the middle element
            left = mid + 1;          // Continue the search on the right side of the middle element
        } else {
            right = mid - 1;     // Continue the search on the left side of the middle element
        }
    }
    return left;
}

int main() {
    std::vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    std::cout << "Insert position of " << target << " is: " << searchInsert(nums, target) << std::endl;

    target = 2;
    std::cout << "Insert position of " << target << " is: " << searchInsert(nums, target) << std::endl;

    target = 7;
    std::cout << "Insert position of " << target << " is: " << searchInsert(nums, target) << std::endl;

    target = 0;
    std::cout << "Insert position of " << target << " is: " << searchInsert(nums, target) << std::endl;

    return 0;
}