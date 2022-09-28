class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int, int> m;
        for(auto x: nums) {
            if(x % 2 == 0)
                m[x]++;
        }
        int even = -1, ans = INT_MIN;
        for(auto x: m) {
            if(x.second > ans) {
                ans = x.second;
                even = x.first;
            }
        }
        return even;
    }
};