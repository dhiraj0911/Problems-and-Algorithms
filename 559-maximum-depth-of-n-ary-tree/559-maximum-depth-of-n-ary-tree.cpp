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
    int ans = 0;
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        order(root, 0);
        return ans + 1;
    }

    void order(Node *root, int d) {
        if(root->children.size() == 0) {
            ans = max(ans, d);
        }
        d++;            
        for(int i = 0; i < root->children.size(); i++) {
            order(root->children[i], d);
        }
    }
};