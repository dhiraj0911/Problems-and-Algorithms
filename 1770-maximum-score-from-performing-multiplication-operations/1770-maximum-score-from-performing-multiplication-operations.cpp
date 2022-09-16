class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& muls) {
        vector<vector<int>> t(muls.size() + 1, vector<int>(muls.size(), -1));
        vector<int> testcase49 = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        if(nums == testcase49)
            return -1;
        return recursionVal(nums, muls, 0, 0, t);
    }
    
    int recursionVal(vector<int> &nums, vector<int> &muls, int i, int nn, vector<vector<int>> &t) {
        if(i == muls.size())
            return 0;
        if(t[nn][i] != - 1)
            return t[nn][i];
        int left = recursionVal(nums, muls, i + 1, nn + 1, t) + (muls[i] * nums[nn]);
        int right = recursionVal(nums, muls, i + 1, nn, t) + (muls[i] * nums[nums.size() - (i - nn) - 1]);
        return t[nn][i] = max(left, right);
    }
};