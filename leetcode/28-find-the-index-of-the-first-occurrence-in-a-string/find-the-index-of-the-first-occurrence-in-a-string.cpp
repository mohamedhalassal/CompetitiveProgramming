class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m > n)
            return -1;
        for (int i = 0; i <= n - m; i++) {
            string k = haystack.substr(i, m);
            if (k == needle)
                return i;
        }
        return -1;
    }
};