//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        st.push(x[0]);
        for(int i = 1; i < x.size(); i++) {
            if(st.empty())
                st.push(x[i]);
            else if(st.top() == '(' && x[i] == ')')
                st.pop();
            else if(st.top() == '{' && x[i] == '}')
                st.pop();
            else if(st.top() == '[' && x[i] == ']')
                st.pop();
            else
                st.push(x[i]);
        }
        return st.empty();
        
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends