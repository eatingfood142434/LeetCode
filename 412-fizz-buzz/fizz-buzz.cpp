class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret(n);
        for (int i = 1; i <= n; i++) {
            bool c1 = false, c2 = false;
            if (i % 3 == 0) c1 = true;
            if (i % 5 == 0) c2 = true;
            if (c1 && c2) ret[i-1] = "FizzBuzz";
            else if (c1) ret[i-1] = "Fizz";
            else if (c2) ret[i-1] = "Buzz";
            else ret[i-1] = to_string(i);
        }
        return ret;
    }
};