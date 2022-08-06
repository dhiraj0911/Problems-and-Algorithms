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
    void Inorder(TreeNode *root, int &sum){
        if(root == NULL)
            return;
        Inorder(root->right, sum);
        // v.push_back(root->val);
        sum += root->val;
        root->val = sum;
        Inorder(root->left, sum);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        // vector<int> v;
        int sum = 0;
        Inorder(root, sum);
        // Preorder(root, v);
        return root;
    }
    
//     void Preorder(TreeNode *root, vector<int> v){
//         if(root != NULL)
//             return;
//         int ans = addd(root->val, v);
//         root->val = ans;
//         Preorder(root->left, v);
//         Preorder(root->right, v);
//         // return root;
//     }
    
//     int addd(int base, vector<int> v){
//         int i = 0;
//         while(v[i] != base){
//             i++;
//         }
//         int add = 0;
//         for(int j = i; j < v.size(); j++){
//             add += v[j];
//         }
//         return add;
//     }
	// void helper(TreeNode* curr, int& sum){
	// if(curr == NULL) return;
	// helper(curr->right, sum);
	// sum += curr->val;
	// curr->val = sum;
	// helper(curr->left, sum);
	// }
	// TreeNode* bstToGst(TreeNode* root) {
	// int sum = 0;
	// helper(root, sum);
	// return root;
	// }

};