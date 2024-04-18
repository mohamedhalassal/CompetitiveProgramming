class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string output ;
        int MinSize = min(w1.size(), w2.size()),
            MaxSize = max(w1.size(), w2.size());

        for (int i = 0; i < MinSize; i++) {
            output.push_back(w1[i]);
            output.push_back(w2[i]);
        }
        if (w1.size() < w2.size())
            swap(w1, w2);
        for (int i = MinSize; i < MaxSize; i++) {
            output.push_back(w1[i]);
        }
        return output;
    }
};