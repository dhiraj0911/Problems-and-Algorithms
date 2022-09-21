class Solution {
public:
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto x: nums)
            sum += x;
        vector<vector<int>> t(nums.size() + 1, vector<int> ((sum / 2) + 1, -1));
        if(sum % 2 != 0)
            return false;
        else
            return isHalfSum(t, nums, sum / 2, nums.size());
    }
    
    bool isHalfSum(vector<vector<int>> &t, vector<int> &nums, int sum, int n) {
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= sum; j++) {
                if(i == 0)
                    t[i][j] = false;
                if(j == 0)
                    t[i][j] = true;
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= sum; j++) {
                if(nums[i - 1] <= j)
                    t[i][j] = t[i - 1][j - nums[i - 1]] || t[i - 1][j];
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][sum];
    }
};