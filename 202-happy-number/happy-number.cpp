class Solution {
public:
    bool isHappy(int n) {
        bool seen[815];
        int t, m = 0;
        while (n != 1) {
            while (n) {
                t = n % 10;
                m += t*t;
                n /= 10;
            }
            n = m;
            m = 0;
            if (seen[n]) return false;
            seen[n] = true;
        }
        return true;
    }
};