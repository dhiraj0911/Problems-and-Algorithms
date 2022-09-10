class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        stack<char> st1, st2;
        for(auto x: s)
            st1.push(x);
        for(auto x: t)
            st2.push(x);
        if(st1.empty())
            return st2.top();
        while(!st2.empty()) {
            if(st1.empty())
                return st2.top();
            if(st1.top() != st2.top())
                return st2.top();
            st1.pop();
            st2.pop();
        }
        return -1;
    }
};