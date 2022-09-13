class Solution {
public:
    int t[3][46];
    int climbStairs(int n) {
        // if(n < 2)
        //     return 1;
        // vector<int> arr{0, 1, 2};
        // for(int i = 0; i < arr.size(); i++) {
        //     for(int j = 0; j < n; j++) {
        //         if(i == 0)
        //             t[i][j] = 0;
        //         if(j == 0)
        //             t[i][j] = 1;
        //     }
        // }
        // for(int i = 1; i < arr.size(); i++) {
        //     for(int j = 1; j < n; j++) {
        //         if(arr[i - 1] <= n)
        //             t[i][j] = t[i][j - arr[i - 1]] + t[i - 1][j];
        //         else
        //             t[i][j] = t[i - 1][j];
        //     }
        // }
        // return t[2][n];
        int prev = 1, prev2 = 1, curr = 1;
        for(int i = 2; i <= n; i++) {
            curr = prev + prev2;
            prev = prev2;
            prev2 = curr;
        }
        return curr;
    }
};