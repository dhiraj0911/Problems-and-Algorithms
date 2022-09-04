class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> v;
        for(int i = 0; i < words.size(); i++) {
            string temp = words[i];
            sort(words[i].begin(), words[i].end());
            if(i > 0 && words[i] == words[i - 1])
                continue;
            v.push_back(temp);
        }
        return v;
    }
};