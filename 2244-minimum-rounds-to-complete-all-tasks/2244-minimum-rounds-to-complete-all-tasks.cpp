class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int, int> m;
        int count = 0;
        for(int i = 0; i < tasks.size(); i++)
            m[tasks[i]]++;
        for(auto x: m) {
            if(x.second >= 3) {
                if(x.second % 3 == 0)
                    count += x.second / 3;
                else
                    count += x.second / 3 + 1;
            }
            else if(x.second == 2) {
                if(x.second % 2 == 0)
                    count += x.second / 2;
                else
                    count += x.second / 2 + 1;
            }
            else
                return -1;
        }
        return count;
    }
};