class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        v = nums;
        sort(v.begin(), v.end());
        int low = 0, high = v.size() - 1;
        while(low < high){
            int sum = v[low] + v[high];
            if(sum == target){
                break;
            }
            else if(sum > target)
                high--;
            else
                low++;
        }
        int i = 0;
        while(v[low] != nums[i]){
            i++;
        }
        int j = 0;
        if(v[low] == v[high]){
            while(v[high] != v[j]){
                j++;
            }
            if(v[j] == v[j+1])
                j++;
        }
        while(v[high] != nums[j]){
            j++;
        }

        return {i, j};
    }
};