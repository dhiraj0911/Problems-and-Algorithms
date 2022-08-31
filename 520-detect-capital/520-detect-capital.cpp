class Solution {
public:
    bool detectCapitalUse(string v) {
        int c = 0;
        for(int i = 0; i < v.length(); i++) {
            if(isupper(v[i]))
                c++;
        }
        if(c == v.length() || c == 0)
            return true;
        return (c == 1 && (isupper(v[0])));
    }
};