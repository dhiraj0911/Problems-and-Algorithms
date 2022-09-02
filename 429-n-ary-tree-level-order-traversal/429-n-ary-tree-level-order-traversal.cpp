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
                Node* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                for(int i = 0; i < temp->children.size(); i++) {
                    q.push(temp->children[i]);
                }
            }
            ans.push_back(v);
            v.clear();
        }
    }
};

// for(int i = 0; i < q.front().children.size(); i++) {
//                 Node* temp = q.front();
//                 q.pop();
//                 if(root->children)
//             }