class Solution {
public:
    int t[1001];
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        memset(t, -1, sizeof(t));
        return getMin(cost, n);
    }
    
    int getMin(vector<int> &cost, int n) {
//         if(n == 0 || n == 1)
//             return cost[n];
//         int left = getMin(cost, n - 1);
//         int right = getMin(cost, n - 2);
        
//         if(n != cost.size())
//             return min(left, right) + cost[n];
//         return min(left, right);
        if(n == 0 || n == 1)
            return cost[n];
        if(t[n] != -1)
            return t[n];
        int left = getMin(cost, n - 1);
        int right = getMin(cost, n - 2);
        
        if(n != cost.size()) {
            t[n] = min(left, right) + cost[n];
            return t[n];
        }
        else {
            t[n] = min(left, right);
            return t[n];
        }
    }
};