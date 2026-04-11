class Solution {
public:
    int candy(vector<int>& ratings) {
        int answer = 0, Size = ratings.size();
        vector<int> v(Size, 1);
        for (int i = 1; i < Size; i++) {
            if (ratings[i] > ratings[i - 1]) {
                v[i] = v[i - 1] + 1;
            }
        }
        for (int i = Size - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                v[i] = max(v[i], v[i + 1] + 1);
            }
        }
        answer = accumulate(v.begin(), v.end(), 0);
        return answer;
    }
};