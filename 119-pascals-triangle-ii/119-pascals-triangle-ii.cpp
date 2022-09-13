class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev;
        for(int i = 1; i <= rowIndex + 1; i++) {
            vector<int> temp(i, -1);
            temp[0] = 1;
            temp[i - 1] = 1;
            for(int j = 1; j < i - 1; j++) {
                temp[j] = prev[j] + prev[j - 1];
            }
            prev = temp;
        }
        return prev;
    }
};