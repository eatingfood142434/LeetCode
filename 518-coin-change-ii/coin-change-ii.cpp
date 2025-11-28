class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<unsigned long long> dp(amount+1,0);
        dp[0] = 1;
        for (const int c : coins) {
            for (int i = 0; i <= amount; i++) {
                if (i+c <= amount) {
                    dp[i+c] += dp[i];
                }
            }
        }
        return dp[amount];
    }
};