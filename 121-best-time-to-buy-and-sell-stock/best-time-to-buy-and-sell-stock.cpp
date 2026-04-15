class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret = 0;
        int dp[prices.size()];
        dp[prices.size()-1] = prices[prices.size()-1];
        for (int i = prices.size()-2; i >= 0; i--) dp[i] = max(prices[i], dp[i+1]);
        for (int i = 0; i < prices.size(); i++) ret = max(ret, dp[i] - prices[i]);
        return ret;
    }
};