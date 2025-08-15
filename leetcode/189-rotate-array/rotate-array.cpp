class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int> num(nums.begin(), nums.end());
        while (k--) {
            num.push_front(num.back());
            num.pop_back();
        }
        for (int i = 0; i < num.size(); i++) {
            nums[i] = num[i];
        }
    }
};