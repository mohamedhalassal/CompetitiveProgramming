class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.back() != 9) {
            digits.back()++;
            return digits;
        }
        int i = digits.size() - 1;
        for (; i >= 0; i--) {
            if (digits[i] == 9)
                digits[i] = 0;
            else
                break;
        }
        if (i >= 0)
            digits[i]++;
        else {
            digits[i + 1]++;
            digits.push_back(0);
        }
        return digits;
    }
};