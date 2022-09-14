class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // sort(s1.begin(), s1.end());
        // unordered_set<string> sset;
        // do{
        //     sset.insert(s1);
        // }while(next_permutation(s1.begin(), s1.end()));
        // for(auto x: sset) {
        //     if(s2.find(x) != string::npos)
        //         return true;
        // }
        // return false;
        if(s1.length() > s2.length())
            return false;
        map<char, int> m1, m2;
        for(int i = 0; i < s1.length(); i++)
            m1[s1[i]]++;
        
        for(int i = 0; i < s2.length() - s1.length() + 1; i++) {
            for(int j = i; j < i + s1.length(); j++) {
                m2[s2[j]]++;
            }
            if(m1 == m2)
                return true;
            m2.clear();
        }
        return false;
    }
};