class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), ret = 0;
        for (int i = 1; i < n; i++) ret += max(0, prices[i] - prices[i-1]);
        return ret;
    }
};