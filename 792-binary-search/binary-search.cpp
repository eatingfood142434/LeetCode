class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size()-1, mid;
        while (l <= h) {
            mid = (h-l)/2 + l;
            if (nums[mid] == target) return mid;
            else if (target < nums[mid]) h = mid-1;
            else l = mid+1;
        }
        return -1;
    }
};