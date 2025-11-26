class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m = 0, c = 0, h = 0;
        unordered_set<int> stored;
        for (int i = 0; i < s.size(); i++) {
            while (!stored.contains(s[h]) && h < s.size()) {
                stored.insert(s[h]);
                c++;
                h++;
            }
            m = max(m,c);
            stored.erase(s[i]);
            c--;
        }
        return m;
    }
};