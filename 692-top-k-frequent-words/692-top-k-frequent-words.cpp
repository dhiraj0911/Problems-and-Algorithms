class Solution {
public:
    bool static comp(pair<int, string> p, pair<int, string> q) {
        if(p.first == q.first)
            return p.second > q.second;
        return p.first < q.first;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> m;
        for(auto x: words)
            m[x]++;
        vector<pair <int, string>> v;
        for(auto x: m)
            v.push_back(make_pair(x.second, x.first));
        sort(v.begin(), v.end(), comp);
        vector<string> ans;
        int i = v.size() - 1;
        int count = 0;
        while(count < k) {
            ans.push_back(v[i].second);
            i--;
            count++;
        }
        return ans;
    }
};