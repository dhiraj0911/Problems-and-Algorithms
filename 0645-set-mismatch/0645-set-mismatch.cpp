class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> m;
        for(auto x: nums)
            m[x]++;
        int r = 0;
        for(auto x: m) { 
            if(x.second == 2) {
                r = x.first;
                break;
            }
        }
        int l = 0;
        for(int i = 1; i <= nums.size(); i++) {
            if(m.find(i) == m.end()) {
                l = i;
                break;
            }
        }
        
        return {r, l};
    }
};