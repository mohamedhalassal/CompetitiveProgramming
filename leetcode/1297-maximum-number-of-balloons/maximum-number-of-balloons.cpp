class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;
        string target = "balon";
        for (char& c : text) {
            freq[c]++;
        }
        if (freq[target[2]] || freq[target[3]]) {
            freq[target[2]] /= 2;
            freq[target[3]] /= 2;
        }
        return min({freq[target[0]], freq[target[1]], freq[target[2]],
                    freq[target[3]], freq[target[4]]});
    }
};
