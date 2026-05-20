class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        map<int, int> mp1, mp2;
        int n = A.size();
        int c = 0;
        for (int i = 0; i < n; i++) {
            mp1[A[i]]++;
            mp2[B[i]]++;
            if (mp2[A[i]]) {
                c++;
            }
            if (A[i] != B[i] && mp1[B[i]]) {
                c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};