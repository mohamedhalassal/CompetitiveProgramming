class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr1.size(); i++) {
            string s = to_string(arr1[i]), k = "";
            for (int j = 0; j < s.size(); j++) {
                k += s[j];
                mp[stoi(k)]++;
            }
        }
        int ans = 0;
        for (int i = 0; i < arr2.size(); i++) {
            string s = to_string(arr2[i]), k = "";
            for (int j = 0; j < s.size(); j++) {
                k += s[j];
                if (mp[stoi(k)]) {
                    ans = max(ans, int(k.size()));
                }
            }
        }
        return ans;
    }
};