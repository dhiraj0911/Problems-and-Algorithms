class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        vector<int> v;
        set<vector<int>> set;
        int index = 0;
        fullfill2(nums, ans, v, index, set);
        return ans;
    }
    
    void fullfill2(vector<int> &nums, vector<vector<int>> &ans, vector<int> &v, int index, set<vector<int>> &s) {
        if(s.find(v) == s.end()) {
            s.insert(v);
            ans.push_back(v);
        }
        for(int i = index; i < nums.size(); i++) {
            v.push_back(nums[i]);
            fullfill2(nums, ans, v, i + 1, s);
            v.pop_back();
        }
    }
};