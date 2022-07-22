class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        if(s.length() == 1){
            return false;
        }
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                v.push(s[i]);
            }
            else{
                if(v.empty() == true)
                    return false;
                else if(matching(v.top(), s[i]) == false)
                    return false;
                else{
                    v.pop();
                }       
            }
        }
        return (v.empty() == true);
    }
    bool matching(char a, char b){
        return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
    }
};
