class Solution {
public:
    string reverseWords(string s) {
        vector<string> word;
        string push = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (i != 0 && s[i - 1] != ' ')
                    word.push_back(push), push = "";

            } else {
                push += s[i];
            }
        }
        if (push != "")
            word.push_back(push);
        reverse(word.begin(), word.end());
        s = "";
        for (int i = 0; i < word.size(); i++) {
            s += word[i];
            if (i != word.size()-1)
                s += " ";
        }
        return s;
    }
};