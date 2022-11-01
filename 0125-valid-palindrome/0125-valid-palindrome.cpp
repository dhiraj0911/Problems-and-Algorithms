class Solution {
public:
    bool XisPalindrome(string s) {
        int low = 0, high = s.length() - 1;
        while(low < high) {
            if(s[low] != s[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        stringstream ss(s);
        string word;
        string ans;
        while(ss >> word) {
            for(char x: word) {
                if(isdigit(x))
                    ans += x;
                else if(int(x) >= 97 and int(x) <= 122)
                    ans += x;
                else if(int(x) <= 90 and int(x) >= 65)
                    ans += char(int(x) + 32);
            }
        }
        if(XisPalindrome(ans))
            return true;
        return false;
    }
};