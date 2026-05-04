class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> rot;
        for (int i = 0; i < n; i++) {
            vector<int> rot2;
            for (int j = n - 1; j >= 0; j--) {
                rot2.push_back(matrix[j][i]);
            }
            rot.push_back(rot2);
        }
        matrix = rot;
    }
};