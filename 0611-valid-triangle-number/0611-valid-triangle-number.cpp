class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = nums.size() - 1; i >= 0; i--) {
            int l = 0, h = i - 1;
            while(l < h) {
                if(nums[l] + nums[h] > nums[i]) {
                    ans += h - l;
                    h--;
                }
                else
                    l++;
            }
        }
        return ans;
    }
};