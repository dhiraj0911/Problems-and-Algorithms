class Solution {
public:
    bool isSorted(vector<int> &v) {
        vector<int> s = v;
        sort(v.begin(), v.end());
        if(s == v) {
            for(int i = 1; i < v.size(); i++) {
                if(v[i - 1] >= v[i])
                    return false;
            }
            return true;
        }
        return false;
    }
    bool canBeIncreasing(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            vector<int> v;
            for(int j = 0; j < nums.size(); j++) {
                if(i != j)
                    v.push_back(nums[j]);
            }
            if(isSorted(v) == true)
                return true;
        }
        return false;
    }
};