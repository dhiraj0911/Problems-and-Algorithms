class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int maxi = 0, maxj = 0;
        for(int i = 0; i < mat.size(); i++)
            for(int j = 0; j < mat[i].size(); j++)
                // if(mat[i][j] > mat[i - 1][j - 1] && mat[i][j] > mat[i + 1][j + 1] && mat[i][j] > mat[i + 1][j - 1] && mat[i][j] > mat[i - 1][j + 1]) {
                if(mat[i][j] > mat[maxi][maxj]) {
                    maxi = i;
                    maxj = j;
                }
        return {maxi, maxj};
    }
};