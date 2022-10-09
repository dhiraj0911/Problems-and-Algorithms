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
    vector<int> v;
    bool findTarget(TreeNode* root, int target) {
        inorder(root);
        int low = 0, high = v.size() - 1;
        while(low < high) {
            if(v[low] + v[high] == target)
                return true;
            else if(v[low] + v[high] > target)
                high--;
            else
                low++;
        }
        return false;
    }
    
    void inorder(TreeNode *root) {
        if(!root)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    } 
};