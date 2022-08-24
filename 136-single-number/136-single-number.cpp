class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto x: m){
            if(m[x.first] == 1)
                return x.first;
        }
        return -1;
    }
};