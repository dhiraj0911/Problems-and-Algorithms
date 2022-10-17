class Solution {
public:
    bool checkIfPangram(string s) {
        set<char> m;
        for(auto x: s)
            m.insert(x);
        return m.size() == 26 ? true: false;
    }
};