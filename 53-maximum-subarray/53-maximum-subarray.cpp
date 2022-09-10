class Solution {
public:
    int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int k = nums.size();
//         int ans = 0;
//         return function(nums, n, k, ans);
//     }
    
//     int function(vector<int> &nums, int n, int k, int ans) {
//         if(n == 0 || k == 0 || k > nums.size())
//             return 0;
//         if()
//     }
        int sum = nums[0], test = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            sum = max(sum + nums[i], nums[i]);
            test = max(test, sum);
        }
        return test;
    }
};