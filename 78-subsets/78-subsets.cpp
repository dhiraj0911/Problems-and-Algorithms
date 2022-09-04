class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        int index = 0;
        fullfill(nums, ans, v, 0);
        return ans;
    }
    void fullfill(vector<int> &nums, vector<vector<int>> &ans, vector<int> &v, int index) {
        ans.push_back(v);
        for(int i = index; i < nums.size(); i++) {
            v.push_back(nums[i]);
            fullfill(nums, ans, v, i + 1);
            v.pop_back();
        }
    }
};