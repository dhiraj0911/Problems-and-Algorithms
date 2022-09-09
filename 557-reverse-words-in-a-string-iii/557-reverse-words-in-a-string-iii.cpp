class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        stringstream words(s);
        string temp;
        while(words >> temp){
            v.push_back(temp);
        }
        string ans = "";
        for(int i = 0; i < v.size(); i++){
            reverse(v[i].begin(), v[i].end());
            ans += v[i]  + " ";
        }
        return ans.substr(0, ans.length() - 1);
    }
};