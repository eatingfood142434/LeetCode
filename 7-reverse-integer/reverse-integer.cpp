class Solution {
public:
    int reverse(int x) {
        string s;
        bool neg = false, larger = false;
        s = to_string(x);
        if (s[0] == '-') {
            neg = true;
            s = s.substr(1, s.size()-1);
        }
        std::reverse(s.begin(), s.end());
        while (s[0] == '0' && s.size() != 1) s = s.substr(1, s.size()-1);
        if (s.size() > 10) return 0;
        if (neg && (s.size() == 10)) {
            string c = "2147483648";
            for (int i = 0; i < 10; i++) {
                if ((c[i] - '0') < (s[i] - '0')) larger = true;
                if ((c[i] - '0') > (s[i] - '0')) break;
            }
        }
        else if (s.size() == 10) {
            string c = "2147483647";
            for (int i = 0; i < 10; i++) {
                if ((c[i] - '0') < (s[i] - '0')) larger = true;
                if ((c[i] - '0') > (s[i] - '0')) break;
            }
        }
        if (larger) return 0;
        if (neg) s = "-" + s;
        return stoi(s);
    }
};