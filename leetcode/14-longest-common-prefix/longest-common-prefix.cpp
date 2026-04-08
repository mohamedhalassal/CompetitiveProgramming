class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        map<string, int> mp;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i], k = "";
            for (int j = 0; j < s.size(); j++) {
                k += s[j];
                mp[k]++;
            }
        }
        int mx = 0;
        string ans = "";
        for (auto [key, val] : mp) {
            if (mx <= key.size() && val == strs.size()) {
                mx = key.size();
                ans = key;
            }
        }
        return ans;
    }
};