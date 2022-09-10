class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int sum = nums[0], test = nums[0];
        // for(int i = 1; i < nums.size(); i++) {
        //     sum = max(sum + nums[i], nums[i]);
        //     test = max(test, sum);
        // }
        // return test;
        
        int sum = 0, maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxi = max(sum, maxi);
            if(sum < 0)
                sum = 0;
        }
        return maxi;
    }
};