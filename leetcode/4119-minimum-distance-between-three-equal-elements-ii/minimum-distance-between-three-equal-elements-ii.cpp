class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int, vector<int>> position;
        int Size = nums.size();
        for (int i = 0; i < Size; i++) {
            position[nums[i]].push_back(i);
        }
        int answer = 1e9;
        for (auto it : position) {
            if (it.second.size() >= 3) {
                auto& v = it.second;
                for (int i = 0; i + 2 < v.size(); i++) {
                    answer = min(answer, abs(v[i + 2] - v[i]) * 2);
                }
            }
        }
        return answer != 1e9 ? answer : -1;
    }
};