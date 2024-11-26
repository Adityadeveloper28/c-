#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) return 0; // Empty array
        
        int index =0; // Index of the next unique element
        for (int i = 0; i < nums.size(); ++i) { // Start from the second element
            if (nums[i] != nums[i - 1]) { // If the current element is different from the previous one
                nums[index++] = nums[i]; // Update the next unique element
            }
        }
        return index;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int newLength = solution.removeDuplicates(nums);
    
    std::cout << "New length: " << newLength << std::endl;
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}