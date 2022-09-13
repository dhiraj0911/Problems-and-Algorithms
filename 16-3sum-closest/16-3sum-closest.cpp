class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 0, diff = INT_MAX;
        for(int i = 0; i < nums.size() - 2; i++) {
            int low = i + 1, high = nums.size() - 1;
            while(low < high) {
                int sum = nums[i] + nums[low] + nums[high];
                if(sum == target)
                    return sum;
                else if(sum < target) {
                    if(abs(sum - target) < diff) {
                        ans = sum;
                        diff = abs(sum - target);
                    }
                    low++;
                }
                else{
                    if(abs(sum - target) < diff) {
                        ans = sum;
                        diff = abs(sum - target);
                    }
                    high--;
                }
            }
        }
        return ans;
    }
};