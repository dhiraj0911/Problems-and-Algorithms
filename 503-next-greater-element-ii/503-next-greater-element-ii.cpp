class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> s;
        for(int i = n - 1; i >= 0; i--) {
            s.push(nums[i]);
        }
        vector<int> v(nums.size(), -1);
        for(int i = n - 1; i >= 0; i--) {
            while(!s.empty() && s.top() <= nums[i])
                s.pop();
            if(!s.empty())
                v[i] = s.top();
            s.push(nums[i]);
        }
        return v;
    }
};