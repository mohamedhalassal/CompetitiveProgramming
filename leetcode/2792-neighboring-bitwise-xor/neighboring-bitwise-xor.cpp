class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
        int o[n];
        o[0] = 0;
        for (int i = 1; i < n; i++) {
            o[i] = o[i - 1] ^ derived[i - 1];
        }
        if ((o[0] ^ o[n - 1]) != derived[n - 1]) {
            return false;
        } else {
            return true;
        }
    }
};