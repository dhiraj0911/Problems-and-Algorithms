class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        vector<int> v;
        for(auto x: messages) {
            stringstream ss(x);
            string word;
            int count = 0;
            while(ss >> word)
                count++;
            v.push_back(count);
        }
        map<string, int> m;
        int i = 0;
        while(i < v.size()) {
            m[senders[i]] += v[i];
            i++;
        }
        vector<pair<int, string>> res;
        for(auto x: m)
            res.push_back(make_pair(x.second, x.first));
        sort(res.begin(), res.end());
        return res[res.size() - 1].second;
    }
};