class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ret;
        string s1, s2;
        for (int i = 1; i <= n/2; i++) {
        s1 = to_string(i);
        s2 = to_string(n-i);
        if (!(s1.find('0') != string::npos) && !(s2.find('0') != string::npos)) ret = {i,n-i};
        }
        return ret;
    }
};