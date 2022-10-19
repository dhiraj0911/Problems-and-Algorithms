class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> m;
        for(auto x: arr)
            m[x]++;
        int n = arr.size() / 2;
        vector<pair<int, int>> v;
        for(auto x: m)
            v.push_back(make_pair(x.second, x.first));
        sort(v.begin(), v.end());
        int count = 0;
        int rem = 0;
        for(int i = v.size() - 1; rem < n; i--) {
            rem += v[i].first;
            count++;
        }
        return count;
    }
};