class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int> v;
        v = nums;
        sort(v.begin(), v.end());
        int low = 0, high = v.size() - 1;
        int mid = 0;
        while(low <= high) {
            mid = low + (high - low) / 2;
            if(v[mid] == target)
                break;
            else if(v[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        if(low > high)
            return -1;
        int i = 0;
        while(nums[i] != v[mid])
            i = i + 1;
        return i;
            
    }
};