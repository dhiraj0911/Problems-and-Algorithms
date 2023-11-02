//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int lcs(string s, string t, int i, int j, vector<vector<int>> &dp) {
        if(i == 0 || j == 0)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(s[i - 1] == t[j - 1]) 
            return dp[i][j] = 1 + lcs(s, t, i - 1, j - 1, dp);
        return dp[i][j] = max(lcs(s, t, i - 1, j, dp), lcs(s, t, i, j - 1, dp));
    }
    
    
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        vector<vector<int>> dp(m + 1, vector<int> (n + 1, -1));
        return m + n - lcs(X, Y, m, n, dp);
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends