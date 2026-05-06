class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size(), m = boxGrid[0].size();
        vector<vector<char>> res;
        for (int i = 0; i < m; i++) {
            vector<char> row;
            for (int j = n - 1; j >= 0; j--) {
                row.push_back(boxGrid[j][i]);
            }
            res.push_back(row);
        }

        for (int i = 0; i < n; i++) {
            for (int j = m - 1; j >= 0; j--) {
                if (res[j][i] == '.') {
                    for (int k = j - 1; k >= 0; k--) {
                        if (res[k][i] == '*') {
                            break;
                        }
                        if (res[k][i] == '#') {
                            swap(res[k][i], res[j][i]);
                        }
                    }
                }
            }
        }
        return res;
    }
};