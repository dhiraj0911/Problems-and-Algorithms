class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        n--;
        string ans = "1";
        while(n--) {
            ans = helper(ans);
        }
        return ans;
    }
    
    string helper(string s) {
        string nxt = "";
        int i = 0;
        while(i < s.length()) {
            char temp = s[i];
            int count = 1;
            i++;
            while(s[i] == temp) {
                count++;
                i++;
            }
            nxt += to_string(count);
            nxt += temp;
        }
        return nxt;
    }
};