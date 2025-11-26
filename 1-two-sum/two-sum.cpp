class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        unordered_map<int,int> s;
        for (int i = 0; i < nums.size(); i++) s[nums[i]] = i;
        for (int i = 0; i < nums.size(); i++) {
            if (s.contains(target-nums[i])) {
                if (i == s[target-nums[i]]) continue;
                ret.push_back(s[target-nums[i]]);
                ret.push_back(i);
                return ret;
            }
        }
        return ret;
    }
};