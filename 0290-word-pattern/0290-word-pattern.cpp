class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> v;
        string word;
        while(ss >> word)
            v.push_back(word);
        if(pattern.length() != v.size())
            return false;
        map<char, vector<int>> a;
        map<string, vector<int>> b;
        // for(auto x: pattern)
        //     a.insert(x);
        for(int i = 0; i < pattern.size(); i++)
            a[pattern[i]].push_back(i);
        // for(auto x: v)
        //     b.insert(x);
        for(int i = 0; i < v.size(); i++)
            b[v[i]].push_back(i);
        if(a.size() != b.size())
            return false;
        for(int i = 0; i <  a.size(); i++) {
            auto x = a[pattern[i]];
            auto y = b[v[i]];
            if(x == y)
                continue;
            else return false;
        }
        return true;
    }
};