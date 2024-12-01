#include <iostream>
#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; // XOR operation to find the single number in the array.
        }
        // binary ka khel hai saara yahaan  ^_^ 
        return result;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {4, 1, 2, 1, 2};
    std::cout << "The single number is: " << solution.singleNumber(nums) << std::endl;
    return 0;
}