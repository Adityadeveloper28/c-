#include <iostream>
#include <vector> // for vector 
#include <unordered_map> // for unordered_map
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { // O(n) time, O(n) space //vector<int>& nums: pass by reference to avoid copy
        unordered_map<int,int>hash; // key: number, value: index
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){

            int numberToFind = target - nums[i];
            cout << "i: " << i << endl;
            cout << "numberToFind: " << numberToFind << endl;
            cout << "nums[i]: " << nums[i] << endl;
          //print hash
            if(hash.find(numberToFind)!=hash.end()){
            result.push_back(hash[numberToFind]);
            result.push_back(i);
            return result;
            

        }
        // if the number is not found, store the number and its index
        hash[nums[i]] = i; // store the number and its index
        cout << "hash[nums[i]]: " << hash[nums[i]] << endl;
        }
        return result; // return empty vector if no solution
    }
};
int main() {
    Solution s; // create an instance of the class
    vector<int> nums = {11, 7, 2, 15}; // create a vector of integers
    int target = 9; // create a target integer
    vector<int> result = s.twoSum(nums, target);  // call the function
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
