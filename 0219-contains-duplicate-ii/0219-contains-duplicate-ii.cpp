class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            if(m.find(temp) != m.end() && i - m[temp] <= k)
                return true;
            m[temp] = i;
        }
        return false;
    }
};