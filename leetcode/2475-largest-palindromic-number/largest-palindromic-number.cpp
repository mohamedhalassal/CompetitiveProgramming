class Solution {
public:
    string largestPalindromic(string num) {
        map<char, int> mp;
        for (int i = 0; i < num.size(); i++) {
            mp[num[i]]++;
        }
        char md = ' ';
        for (char c = '9'; c >= '0'; c--) {
            if (mp[c] % 2) {
                md = c;
                mp[c]--;
                break;
            }
        }
        string ans = "";
        for (char c = '9'; c >= '0'; c--) {
            int pairs = mp[c] / 2;
            while (pairs--)
                ans += c;
        }
        if (!ans.empty() && ans[0] == '0') {
            ans = "";
        }
        string r = ans;
        reverse(r.begin(), r.end());
        if (md != ' ')
            ans += md;
        ans += r;
        return (ans.empty() ? "0" : ans);
    }
};