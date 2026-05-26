class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> freq(123);
        for (int i = 0; i < word.size(); i++) {
            freq[word[i]]++;
        }
        int cnt = 0;
        for (int i = 65; i <= 90; i++) {
            if (freq[i] && freq[i + 32]) {
                cnt++;
            }
        }
        return cnt;
    }
};