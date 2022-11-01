class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0, high = s.length() - 1;
        while(low < high) {
            if(s[low] != s[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string s = "";
        for(auto x: words) {
            if(isPalindrome(x)) {
                s = x;
                break;
            }
        }
        return s;
    }
};