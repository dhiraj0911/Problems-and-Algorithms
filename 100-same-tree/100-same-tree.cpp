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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return Inorder(p, q);
    }
    bool Inorder(TreeNode *p, TreeNode *q){
        if(p == NULL && q == NULL)
            return true;
        else if((p == NULL && q != NULL) || (p != NULL && q == NULL))
            return false;
        bool a = Inorder(p->left, q->left);
        if(p->val != q->val)
            return false;
        bool b = Inorder(p->right, q->right);
        return a && b;
    }
};