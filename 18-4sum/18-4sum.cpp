class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size() < 4)
            return ans;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        for(int i = 0; i < nums.size() - 3; i++){
            for(int j = i + 1; j < nums.size() - 2; j++){
                long long int low = j + 1, high = nums.size() - 1;
                while(low < high){
                    long long int sum = nums[low] + nums[high];
                    if(sum + nums[i] + nums[j] == target){
                        s.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++;
                        high--;
                    }
                    else if(sum + nums[i] + nums[j] > target)
                        high--;
                    else if(sum + nums[i] + nums[j] < target)
                        low++;
                }
            }
        }
        for(auto x: s)
            ans.push_back(x);
        return ans;
    }
};