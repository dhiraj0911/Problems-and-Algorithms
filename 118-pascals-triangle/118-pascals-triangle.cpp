class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i = 1; i <= numRows; i++) {
            vector<int> v(i, -1);
            v[0] = 1;
            v[i - 1] = 1;
            for(int j = 1; j < i - 1; j++) {
                v[j] = temp[j] + temp[j - 1];
            }
            ans.push_back(v);
            temp = v;
        }
        return ans;
    }
};