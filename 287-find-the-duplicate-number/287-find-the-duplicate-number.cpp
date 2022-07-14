class Solution {
public:
    int findDuplicate(vector<int>& v) {
        unordered_set<int> s;
        for(int i = 0; i < v.size(); i++){
            if(s.find(v[i]) == s.end())
                s.insert(v[i]);
            else
                return v[i];
        }
        return -1;
    }
};