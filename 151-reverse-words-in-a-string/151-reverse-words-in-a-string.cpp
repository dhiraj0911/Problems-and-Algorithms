class Solution {
public:
    string reverseWords(string s) {
        stack<string> v;
        stringstream newS(s);
        string word;
        while(newS >> word){
            v.push(word);
        }
        string ans;
        while(!v.empty()){
            ans = ans + " " + v.top();
            v.pop();
        }
        return ans.substr(1);
    }
};