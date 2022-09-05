/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        queue<Node*> q;
        bsf(root, ans, q);
        return ans;
    }
    
    void bsf(Node* root, vector<vector<int>> &ans, queue<Node*> q) {
        if(!root)
            return;
        q.push(root);
        while(!q.empty()) {
            vector<int> v;
            int s = q.size();
            for(int i = 0; i < s; i++) {
                Node *temp = q.front();
                q.pop();
                v.push_back(temp->val);
                for(int j = 0; j < temp->children.size(); j++) {
                    q.push(temp->children[j]);
                }
            }
            ans.push_back(v);
        }
    }
};