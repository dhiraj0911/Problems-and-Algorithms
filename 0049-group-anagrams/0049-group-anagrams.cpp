class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        vector<vector< string>> v;
        for(auto x: strs) {
            string s = x;
            sort(s.begin(), s.end());
            m[s].push_back(x);
        }
        for(auto x: m) {
            v.push_back(x.second);
        }
        return v;
    }
};