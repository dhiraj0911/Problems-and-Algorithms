class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() == 0)
            return res;
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++){
            int low = i + 1, high = nums.size() - 1;
            while(low < high){
                int sum = nums[low] + nums[high];
                if(sum == (-1 * nums[i])){
                    s.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
                else if(sum < -nums[i])
                    low++;
                else if(sum > -nums[i])
                    high--;
            }
        }
        for(auto x: s){
            res.push_back(x);
        }
        return res;
    }
};
