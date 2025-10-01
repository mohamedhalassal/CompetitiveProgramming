class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> res;
        for (auto& num : nums) {
            freq[num]++;
            if (freq[num] == 2) {
                res.push_back(num);
            }
        }
        return res;
    }
};