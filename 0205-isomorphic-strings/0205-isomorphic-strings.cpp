class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, vector<int>> m,n;
        if(s.length() != t.length())
            return false;
        for(int i = 0; i < s.length(); i++) {
            m[s[i]].push_back(i);
            n[t[i]].push_back(i);
        }
        for(int i = 0; i < m.size(); i++) {
            auto a = m[s[i]];
            auto b = n[t[i]];
            if(a == b)
                continue;
            else return false;
        }
        return true;
    }
};