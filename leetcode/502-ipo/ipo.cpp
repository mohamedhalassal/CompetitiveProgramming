class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>,greater<pair<int, int>>>pq;
        priority_queue<pair<int, int>> mxp;
        for (int i = 0; i < n; i++) {
            pq.push({capital[i], profits[i]});
        }
        for (int i = 0; i < k; i++) {
            while (!empty(pq) && pq.top().first <= w) {
                mxp.push({pq.top().second, pq.top().first});
                pq.pop();
            }
            if (empty(mxp))
                return w;
            w += mxp.top().first;
            mxp.pop();
        }
        return w;
    }
};