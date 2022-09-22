class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        target = abs(target);
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
            sum += nums[i];
        if(target > sum || (target + sum) % 2 == 1)
            return 0;
        int s1 = (sum + target) / 2;
        return subSetSum(nums, nums.size(), s1);
    }
    int subSetSum(vector<int> &nums, int n, int sum) {
        int t[n + 1][sum + 1];
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= sum; j++) {
                if(i == 0)
                    t[i][j] = 0;
                if(j == 0)
                    t[i][j] = 1;
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j <= sum; j++) {
                if(nums[i - 1] <= j)
                    t[i][j] = t[i - 1][j - nums[i - 1]] + t[i - 1][j];
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][sum];
    }
};