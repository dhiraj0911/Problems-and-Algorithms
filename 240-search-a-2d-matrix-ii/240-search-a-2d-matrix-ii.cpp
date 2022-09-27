class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int l = 0, r = col - 1;
        while(l < row && r >= 0) {
            int mid = matrix[l][r];
            if(mid == target)
                return true;
            else if(mid > target)
                r--;
            else
                l++;
        }
        return false;
    }
};