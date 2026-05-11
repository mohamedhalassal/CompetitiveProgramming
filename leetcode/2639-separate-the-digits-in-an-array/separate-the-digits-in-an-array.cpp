class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string s;
        vector<int> ans;
        for (auto &it : nums ) {
            s = to_string(it);
            for (auto &st : s ) {
                ans.push_back(st - '0');
            }
        }
        return ans;
    }
};