class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = -1;
        string result = "";
        for (int i = 0; i < word.size(); i++) {
            if (ch == word[i]) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            return word;
        }
        for (int i = idx; i >= 0; i--) {
            result += word[i];
        }
        for (int i = idx + 1; i < word.size(); i++) {
            result += word[i];
        }
        return result;
    }
};
/*
  abcdefd
  search a first char ch

*/