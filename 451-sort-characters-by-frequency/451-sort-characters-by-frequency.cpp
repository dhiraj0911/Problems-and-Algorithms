class Solution {
public:
    string frequencySort(string s) {
        vector<pair <int , char>> v;
        map<char, int> m;
        for(auto x: s) 
            m[x]++;
        for(auto x: m) 
            v.push_back(make_pair(x.second, x.first));
        sort(v.begin(), v.end());
        string ans = "";
        for(int i = 0; i < v.size(); i++) {
            int temp = v[i].first;
            int j = 0;
            while(j < temp) {
                ans += v[i].second;
                j++;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};