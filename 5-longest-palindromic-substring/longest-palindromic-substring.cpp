class Solution {
public:
    string longestPalindrome(string s) {
        int sz = s.size();
        string m = "";
        for (int i = 0; i < sz; i++) {
            int l = i, h = i;
            while (l-1 >= 0 && h+1 < sz && s[l-1] == s[h+1]) {
                l--;
                h++;
            }
            if (m.size() < h-l+1) m = s.substr(l, h-l+1);
        }

        for (int i = 0; i < sz-1; i++) {
            if (s[i] == s[i+1]) {
                int l = i, h = i+1;
                while (l-1 >= 0 && h+1 < sz && s[l-1] == s[h+1]) {
                    l--;
                    h++;
                }
                if (m.size() < h-l+1) m = s.substr(l, h-l+1);
            }
        }
        return m;
    }
};