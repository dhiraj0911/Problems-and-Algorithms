class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> s;
        vector<int> v;
        for(int i = n - 1; i >= 0; i--){
            while(!s.empty() && prices[i] < prices[s.top()]){
                s.pop();
            }
            if(s.empty())
                v.push_back(prices[i]);
            else
                v.push_back(prices[i] - prices[s.top()]);
            s.push(i);
        }
        reverse(v.begin(), v.end());
        return v;
    }
};