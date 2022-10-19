class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<pair< int, pair< int, vector<int>>>> v;
        int i = 0;
        for(auto z: points) {
            if(x == z[0] || y == z[1]) {
                v.push_back(make_pair(abs(z[0] - x) + abs(z[1] - y), make_pair(i, z)));
                i++;
            }
            else
                i++;
        }
        if(v.empty())
            return -1;
        sort(v.begin(), v.end());
        return v[0].second.first;
    }
};