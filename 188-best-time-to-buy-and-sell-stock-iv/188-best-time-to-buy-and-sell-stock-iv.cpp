class Solution {
public:
    int t[1001][102][2];
    int maxProfit(int k, vector<int>& prices) {
        memset(t, -1, sizeof(t));
        return fun(prices, k, 0, 0);
    }
    
    int fun(vector<int> &prices, int k, int i, int f) {
        if(k == 0 || i >= prices.size())
            return 0;
        if(t[i][k][f] != -1)
            return t[i][k][f];
        int res;
        if(f)
            res = max(prices[i] + fun(prices, k - 1, i + 1, 0), fun(prices, k, i + 1,1));
        else
            res = max(fun(prices, k, i + 1, 0), -1 * prices[i] + fun(prices, k, i + 1, 1));
        t[i][k][f] = res;
        return res;
    }
};