class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int counts[32]={0};
        for (auto num : nums) {
            for (int i = 0; i < 32; i++) {
                if (num & (1 << i))
                    counts[i]++;
            }
        }
        int result = 0;
        for (int i = 0; i < 32; i++) {
            if (counts[i] % 3 != 0) {
                result |= (1 << i);
            }
        }
        return result;
    }
};