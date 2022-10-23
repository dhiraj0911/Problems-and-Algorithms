class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = nums[0] * nums[1] * nums[2];
        int y = max(x, nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3]);
        int z = max(y, nums[0] * nums[1] * nums[nums.size() - 1]);
        return z;
    }
};