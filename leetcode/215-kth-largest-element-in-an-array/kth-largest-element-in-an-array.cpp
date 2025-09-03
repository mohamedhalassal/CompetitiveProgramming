class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> ans;
        for (auto& item : nums)
            ans.push(item);
        int n = nums.size();
        while (n > k) {
            ans.pop();
            n--;
        }
        return ans.top();
    }
};