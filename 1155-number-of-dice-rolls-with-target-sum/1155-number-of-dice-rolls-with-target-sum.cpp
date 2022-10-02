class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> v(n + 1, vector<int> (1001, -1));
        return solve(n, k,target, 0, v);
    }
    
    int solve(int i, int k, int target, int sum, vector<vector<int>> &t) {
        if(sum == target && i < 1)
            return 1;
        if(i < 1)
            return 0;
        if(t[i][sum] != -1)
            return t[i][sum];
        long long int temp = 0;
        for(int j = 1; j <= k; j++)
            temp += solve(i - 1, k, target, sum + j, t);
        return t[i][sum] = temp % 1000000007;
    }
};