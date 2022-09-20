class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string a = s;
        reverse(s.begin(), s.end());
        return LCS(a, s, a.length(), s.length());
    }
    
    int t[1001][1001];
    int LCS(string s1, string s2, int n, int m) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 || j == 0)
                    t[i][j] = 0;
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(s1[i - 1] == s2[j - 1])
                    t[i][j] = 1 + t[i - 1][j - 1];
                else
                    t[i][j] = max(t[i][j - 1], t[i - 1][j]);
            }
        }
        return t[n][m];
    }
};