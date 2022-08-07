/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *dummy;
        int low = 0, high = nums.size() - 1;
        Preorder(dummy, low, high, nums);
        return dummy;
    }
    void Preorder(TreeNode *&dummy, int low, int high, vector<int>nums){
        if(low > high)
            return;
        int mid = (low + high) / 2;
        TreeNode *temp = new TreeNode(nums[mid]);
        dummy = temp;
        Preorder(dummy->left, low, mid - 1, nums);
        Preorder(dummy->right, mid + 1, high, nums);
    }

};