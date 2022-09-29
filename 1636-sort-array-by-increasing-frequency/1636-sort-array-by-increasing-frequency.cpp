class Solution {
public:
    static bool comp(pair<int,int>p,pair<int,int>q){
        if(p.first == q.first)
            return p.second > q.second;
        return p.first < q.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> m;
        vector<pair<int, int>> v;
        for(auto x: nums)
            m[x]++;
        for(auto x: m)
            v.push_back(make_pair(x.second, x.first));
        sort(v.begin(), v.end(), comp);
        vector<int> ans;
        for(int i = 0; i < v.size(); i++) {
            int temp = v[i].first;
            int j = 0;
            while(j < temp) {
                ans.push_back(v[i].second);
                j++;
            }
        }
        return ans;
    }
};