class Solution {
public:
    int tribonacci(int n) {
        long long a = 0, b = 1, c = 1, d;
        while (n--) {
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        return a;
    }
};