class Solution {
public:
    bool rotateString(string s, string goal) {
        string check = s + s;
        int sz = s.size();
        for (int i = 0; i < sz; i++) {
            if (check.substr(i, sz) == goal)
                return true;
        }
        return false;
    }
};