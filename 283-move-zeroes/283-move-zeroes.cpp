class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        vector<int> v1;
        v = nums;
        int low = 0, high = nums.size() - 1;
        while(low < high) {
            if(v[low] == 0 && v[high] != 0)
                swap(v[low], v[high]);
            else if(v[low] == 0 && v[high] == 0)
                high--;
            else if(v[low] != 0)
                low++;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0)
                v1.push_back(nums[i]);
        }
        reverse(v1.begin(), v1.end());
        int i = 0;
        while(!v1.empty()) {
            v[i] = v1.back();
            v1.pop_back();
            i++;
        }
        nums = v;
    }
};