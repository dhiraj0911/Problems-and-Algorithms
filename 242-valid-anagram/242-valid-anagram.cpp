class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_set<string> a;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        a.insert(s);
        if(a.find(t) != a.end())
            return true;
        return false;
    }
};