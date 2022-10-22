class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int time = 0;
        double wait = 0;
        for(int i = 0; i < customers.size(); i++) {
            time = max(customers[i][0], time) + customers[i][1];
            wait += time - customers[i][0];
        }
        return wait / customers.size();
    }
};