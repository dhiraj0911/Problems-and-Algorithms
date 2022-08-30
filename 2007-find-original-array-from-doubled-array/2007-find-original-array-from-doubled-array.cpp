class Solution {
public:
    vector<int> findOriginalArray(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> m;
        sort(nums.begin(), nums.end());
        for(int x: nums)
            m[x]++;
        for(int x: nums){
            if(m.count(x) && m[x] > 0){
                m[x]--;
                if(!m.count(x * 2) || m[x * 2] == 0)
                    return {};
                else{
                    m[x * 2]--;
                    res.push_back(x);
                }
            }
        }
        return res;
    }
};