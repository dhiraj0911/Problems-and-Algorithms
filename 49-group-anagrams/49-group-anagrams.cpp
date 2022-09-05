class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for(int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            sort(word.begin(), word.end());
            if(m.find(word) != m.end())
                m[word].push_back(strs[i]);
            else {
                vector<string> v;
                v.push_back(strs[i]);
                m[word] = v;
            }
        }
        for(auto x: m) {
            ans.push_back(x.second);
        }
        return ans;
    }
};