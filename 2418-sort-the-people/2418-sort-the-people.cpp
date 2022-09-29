class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        vector<pair <int, string>> v;
        for(int i = 0; i < names.size(); i++) {
            v.push_back(make_pair(heights[i], names[i]));
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++)
            ans.push_back(v[i].second);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};