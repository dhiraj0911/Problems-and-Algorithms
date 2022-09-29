class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int, int> m;
        for(auto x: nums)
            m[x]++;
        int yes = 0, no = 0;
        for(auto x: m) {
            yes += x.second / 2;
            no += x.second % 2;
        }
        return {yes, no};
    }
};