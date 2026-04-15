class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size(), p1 = 0, p2 = 0;
        vector<int> merged(m+n);
        for (int i = 0; i < m+n; i++) {
            if (p1 == m) merged[i] = nums2[p2++];
            else if (p2 == n) merged[i] = nums1[p1++];
            else if (nums1[p1] < nums2[p2]) merged[i] = nums1[p1++];
            else merged[i] = nums2[p2++];
        }
        int mid = (m+n)/2;
        if ((m+n) % 2 == 1) return merged[mid];
        else return (merged[mid-1] + merged[mid])/2.0;
    }
};