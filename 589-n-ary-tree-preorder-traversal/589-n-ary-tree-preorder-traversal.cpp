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
    vector<int> preorder(Node* root) {
        vector<int> ans;
        queue<Node*> q;
        order(root, ans, q);
        return ans;
    }
    
    void order(Node* root, vector<int> &ans, queue<Node*> &q) {
        if(!root)
            return;
        q.push(root);
        while(!q.empty()) {
            int s = q.size();
            for(int i = 0; i < s; i++) {
                Node* temp = q.front();
                q.pop();
                ans.push_back(temp->val);
                for(int j = 0; j < temp->children.size(); j++) {
                    order(root->children[j], ans, q);
                }
            }
        }
    }
};