class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int, int> m;
        for(auto x: nums)
            m[x]++;
        vector<int> v;
        for(auto x: m) {
            if(x.second == 1)
                v.push_back(x.first);
        }
        vector<int> ans;
        for(auto x: v) {
            if(m.find(x - 1) == m.end() && m.find(x + 1) == m.end())
                ans.push_back(x);
        }
        return ans;
    }
};