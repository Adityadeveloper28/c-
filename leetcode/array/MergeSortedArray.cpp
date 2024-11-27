#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int i = m - 1; // Index of the last element in nums1
    int j = n - 1; // Index of the last element in nums2
    int k = m + n - 1; // Index of the last element in the merged array

    while (i >= 0 && j >= 0) {      // While there are elements in both arrays
        if (nums1[i] > nums2[j]) {  // If the element in nums1 is greater than the element in nums2
            nums1[k--] = nums1[i--]; // Copy the element from nums1 to the merged array
        } else {                // If the element in nums2 is greater than the element in nums1
            nums1[k--] = nums2[j--];   // Copy the element from nums2 to the merged array
        }
    }
 
    while (j >= 0) {    // If there are elements left in nums2
        nums1[k--] = nums2[j--];   // Copy the remaining elements from nums2 to the merged array
    }
}

int main() {
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    for (int num : nums1) {
        std::cout << num << " ";
    }

    return 0;
}