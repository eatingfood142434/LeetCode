class Solution {
public:
    int jump(vector<int>& nums) {
        int n = 0, f = 0, fa = 0, ret = 0;
        while (f < nums.size()-1) {
            fa = 0;
            for (int i = n; i <= f; i++) fa = max(fa, i+nums[i]);
            n = f;
            f = fa;
            ret++;
        }
        return ret;
    }
};