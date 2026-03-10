class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        int psz = potions.size();
        sort(potions.begin(), potions.end());
        for (int i = 0; i < spells.size(); i++) {
            int l = 0, r = psz - 1, mid, an = psz;
            while (l <= r) {
                mid = (l + r) / 2;
                if ((long long)spells[i] * potions[mid] >= success) {
                    r = mid - 1;
                    an = mid;
                } else {
                    l = mid + 1;
                }
            }
            ans.push_back(psz - an);
        }
        return ans;
    }
};
