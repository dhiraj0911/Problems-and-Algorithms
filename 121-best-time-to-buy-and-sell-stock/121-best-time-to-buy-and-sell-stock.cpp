class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // if(prices.size() <= 1)
        //     return 0;
        // int minbuy = prices[0], maxprofit = 0;
        // for(int i = 1; i < prices.size(); i++) {
        //     maxprofit = max(maxprofit, prices[i] - minbuy);
        //     if(prices[i] < minbuy)
        //         minbuy = prices[i];
        // }
        // return maxprofit;
        int buy = prices[0], maxp = 0;
        for(int i = 0; i < prices.size(); i++) {
            maxp = max(maxp, prices[i] - buy);
            if(prices[i] < buy)
                buy = prices[i];
        }
        return maxp;
    }
};