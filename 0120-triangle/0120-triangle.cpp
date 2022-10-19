class Solution {
public:
    int t[201][201];
    int minimumTotal(vector<vector<int>>& triangle) {
        // int sum = 0;
        // int i = 0;
        // bool tryy = false;
        // for(auto x: triangle) {
        //     if(!tryy) {
        //         sum += x[0];
        //         tryy = true;
        //     }
        //     else {
        //         int temp = min(x[i], x[i + 1]);
        //         if(x[i] > x[i + 1])
        //             i = i + 1;
        //         sum += temp;                
        //     }
        // }
        // return sum;
        int n = triangle.size();
        memset(t, -1, sizeof(t));
        return solve(0, 0, n, triangle);
    }
    
    int solve(int i, int j, int n, vector<vector<int>> &triangle) {
        if(i == n - 1)
            return triangle[i][j];
        if(t[i][j] != -1)
            return t[i][j];
        int bottom = triangle[i][j] + solve(i + 1, j, n, triangle);
        int bottomRight = triangle[i][j] + solve(i + 1, j + 1, n, triangle);
        return t[i][j] = min(bottom, bottomRight);
    }
};