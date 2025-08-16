class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> pref(n), suf(n);
        pref[0] = prices[0];
        suf.back() = prices.back();
        for (int i = 1; i < n; i++) {
            pref[i] = min(pref[i - 1], prices[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = max(suf[i + 1], prices[i]);
        }
        int mx = 0;
        for (int i = 1; i < n; i++) {
            mx = max(mx, suf[i] - pref[i]);
        }
        return mx;
    }
};