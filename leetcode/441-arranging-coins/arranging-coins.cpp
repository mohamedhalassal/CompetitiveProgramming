class Solution {
public:
    long long f(long long r) { return r * (r + 1) / 2; }

    bool pr(long long rows, long long n) { return n >= f(rows); }

    int arrangeCoins(int n) {
        long long s = 0, e = 1e5 + 1, mid;
        long long ans = 0;
        while (s <= e) {
            mid = (s + e) / 2;
            if (pr(mid, n)) {
                ans=mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }
};