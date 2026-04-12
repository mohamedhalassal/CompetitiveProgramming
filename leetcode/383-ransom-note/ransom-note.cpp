class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mp;
        int n = ransomNote.size(), m = magazine.size(), ch = 0;
        if (n > m)
            return false;
        for (int i = 0; i < n; i++) {
            mp[ransomNote[i]]++;
        }
        for (int i = 0; i < m; i++) {
            if (mp[magazine[i]]) {
                ch++;
                mp[magazine[i]]--;
            }
        }
        return ch == n ? true : false;
    }
};