class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        sort(nums.begin(), nums.end());
        vector<pair <int, int>> v;
        vector<int> ans;
        for(auto x: nums) {
            m[x]++;
        }
        for(auto x: m) {
            v.push_back(make_pair(x.second, x.first));
        }
        sort(v.begin(), v.end());
        int i = 0;
        while(i < k) {
            ans.push_back(v[v.size() -1 - i].second);
            i++;
        }
        return ans;
    }
};