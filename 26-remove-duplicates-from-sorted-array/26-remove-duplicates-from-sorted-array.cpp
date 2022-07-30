class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int res = 1;
        for(int i = 1; i < v.size(); i++){
            if(v[i - 1] != v[i])
                v[res++] = v[i];
        }
        return res;
        // return res++;
    }
};