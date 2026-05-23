class Solution {
public:
    bool check(vector<int>& nums) {
        bool ch = 1;
        int idx = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                ch = 0;
                idx = i + 1;
                break;
            }
        }
        if (!ch) {
            vector<int> n;
            for (int i = idx; i < nums.size(); i++) {
                n.push_back(nums[i]);
            }
            for (int i = 0; i < idx; i++) {
                n.push_back(nums[i]);
            }
            if (!is_sorted(n.begin(), n.end())) {
                return false;
            }
        }
        return true;
    }
};