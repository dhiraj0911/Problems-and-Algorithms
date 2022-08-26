class Solution {
public:
    string reverseVowels(string s) {
        int low = 0, high = s.length() - 1;
        while(low < high){
            if((isVowel(s[low]))&& isVowel(s[high]))
                swap(s[low], s[high]);
            if(isVowel(s[low]) && !isVowel(s[high]))
                high--;
            else if(!isVowel(s[low])&& isVowel(s[high]))
                low++;
            else{
                low++;
                high--;
            }
        }
        return s;
    }
    bool isVowel(char s){
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' ||s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' ||s == 'U')
            return true;
        return false;
    }
};