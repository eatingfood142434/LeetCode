class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN, curr = 0;
        for (const int i : nums) {
            curr += i;
            m = max(m, curr);
            if (curr < 0) curr = 0;
        }
        return m;
    }
};