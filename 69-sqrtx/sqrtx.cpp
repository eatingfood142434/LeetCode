class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = INT_MAX;
        long long m = 0;
        while (l < r) {
            m = (l+r)/2;
            if (m*m < x) l = m+1;
            else r = m;
        }
        if (m*m > x) return m-1;
        if ((m+1)*(m+1) <= x) return m+1;
        return m;
    }
};