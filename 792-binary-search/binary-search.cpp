class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size()-1, mid;
        while (l < h) {
            mid = (h-l)/2 + l;
            if (target <= nums[mid]) h = mid;
            else l = mid+1;
        }
        if (nums[l] == target) return l;
        return -1;
    }
};