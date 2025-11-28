class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,vector<string>> m = {{'2',{"a","b","c"}},{'3',{"d","e","f"}},{'4',{"g","h","i"}},{'5',{"j","k","l"}},{'6',{"m","n","o"}},{'7',{"p","q","r","s"}},{'8',{"t","u","v"}},{'9', {"w","x","y","z"}}};
        vector<string> ret;
        for (string c : m[digits[0]]) ret.push_back(c);
        for (int i = 1; i < digits.size(); i++) {
            vector<string> temp;
            for (auto s : ret) {
                for (string c : m[digits[i]]) temp.push_back(s + c);
            }
            ret = temp;
        }
        return ret;
    }
};