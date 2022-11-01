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
//         stringstream ss(s);
//         string word;
//         vector<string> v;
//         while(ss >> word) {
//             if(word[word.length() - 1] > 122 || word[word.length() - 1] < 65)
//                 word.pop_back();
//             if(word[0] >= 48 && word[0] <= 57)
//                 continue;
//             if(word[0] > 122 || word[0] < 65 && word.size() >= 2) {
//                 for(int i = 0; i < word.size() - 1; i++) 
//                     word[i] += word[i + 1];
//                 word.pop_back();
//             }
//             v.push_back(word);  
//         }
//         string text = "";
//         for(auto x: v)
//             text += x;
//         for(int i = 0; i < text.length(); i++) {
//             if(text[i] >= 48 && text[i] <= 57)
//                 continue;
//             if(text[i] < 97)
//                 text[i] = text[i] + 32;
//         }
        
//         if(XisPalindrome(text))
//             return true;
//         return false;
        string n;
        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])) 
                n.push_back(tolower(s[i]));
        }
        if(XisPalindrome(n))
            return true;
        return false;
    }
};