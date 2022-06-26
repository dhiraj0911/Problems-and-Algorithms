const int CHAR = 256;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        for(int i = 0; i < s.length(); i++){
            int count[CHAR] = {0};
            for(int j = i; j < s.length(); j++){
                if(count[s[j]] == 1){
                    break;
                }
                else{
                    res = max(res, j - i + 1);
                    count[s[j]] = 1;
                }
            }
            count[s[i]] = 0;
        }
        return res;
    }
};