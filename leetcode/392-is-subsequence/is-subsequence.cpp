class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ch = 0, j = 0;
        for (int i = 0; i < t.size(); i++) {
            if (s[j] == t[i]) {
                ch++;
                j++;
            }
        }
        return (ch == s.size());
    }
};