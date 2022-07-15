class Solution {
public:
    vector<int> searchRange(vector<int>& n, int target) {
        vector<int> v;
        // [lower_bound, upper_bound)
        int lower = lower_bound(n.begin(), n.end(), target) - n.begin();
        int upper = upper_bound(n.begin(), n.end(), target) - n.begin();
        if(lower != upper){
            v.push_back(lower);
            v.push_back(upper - 1);
            return v;
        }
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
};