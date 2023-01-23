//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        stack<char> st;
        st.push(s[0]);
        int i = 1;
        while(i < s.length()) {
            if(!st.empty() && s[i] == st.top()) {
                st.pop();
                i++;
            }
            else {
                st.push(s[i]);
                i++;
            }
        }
        if(st.empty())
            return "-1";
        string str = "";
        while(!st.empty()) {
            str.push_back(st.top());
            st.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends