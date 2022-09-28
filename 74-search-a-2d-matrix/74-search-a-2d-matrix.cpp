class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int i = 0, j = matrix[0].size() - 1;
        while(i < n && j >= 0) {
            if(matrix[i][j] == target)
                return true;
            else if(matrix[i][j] > target)
                j--;
            else
                i++;
        }
        return false;
        // int i = 0, j = matrix.size();
        // int row = 0;
        // while(i < j) {
        //     int mid = (i + j) / 2;
        //     if(matrix[0][mid] == target)
        //         return true;
        //     else if(matrix[0][mid] > target)
        //         j = mid - 1;
        //     else {
        //         row = mid;
        //         i = mid + 1;
        //     }
        // }
        // int l = row;
        // int r = matrix[0].size() - 1;
        // while(l <= r) {
        //     int mid = (l + r) / 2;
        //     if(matrix[row][mid] == target)
        //         return true;
        //     else if(matrix[row][mid] > target)
        //         r = mid - 1;
        //     else
        //         l = mid + 1;
        // }
        // return false;
    }
};