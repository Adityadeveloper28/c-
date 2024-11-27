#include <iostream>
#include <vector>

struct TreeNode {
    int val; // Value of the node
    TreeNode *left;  // Pointer to the left child
    TreeNode *right; // Pointer to the right child
    TreeNode(int x) : val(x), left(NULL), right(NULL) {} // Constructor to set the value of the node to x and the left and right pointers to NULL
    //what is x? x is the value of the node that is passed to the constructor when a new node is created in the code
};

class Solution {
public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* sortedArrayToBST(const std::vector<int>& nums, int left, int right) {
       if(left>right){
        return NULL;
       }
       int mid=left+(right-left)/2;
       TreeNode* root = new TreeNode(nums[mid]); //root
       root->left=sortedArrayToBST(nums,left,mid-1);
       root->right=sortedArrayToBST(nums,mid+1,right);
       return root;//return root
       }
};

// Helper function to print the tree in-order (for testing purposes)
void printInOrder(TreeNode* node) {
    if (node == NULL) {
        return;
    }
    printInOrder(node->left); // Traverse the left subtree
    std::cout << node->val << " ";  // Print the value of the current node
    printInOrder(node->right);  // Traverse the right subtree
}

int main() {
    Solution solution;
    std::vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode* root = solution.sortedArrayToBST(nums);
    printInOrder(root);
    return 0;
}