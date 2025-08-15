class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int can = 0, coun = 0;
        for (auto num : nums) {
            if (coun == 0) {
                can = num;
                coun++;
            }
            else if (can == num)
                coun++;
            else
                coun--;
        }
        return can;
    }
};