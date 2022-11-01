class Solution {
public:
    bool isPalindrome(string s, int low, int high) {
        while(low < high) {
            if(s[low] != s[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int low = 0, high = s.length() - 1;        
        if(isPalindrome(s, low, high))
            return true;
        while(low < high) {
            if(s[low] == s[high]) {
                low++;
                high--;
            }
            else 
                return (isPalindrome(s, low, high - 1) || isPalindrome(s, low + 1, high));
        }
        return false;
    }
};