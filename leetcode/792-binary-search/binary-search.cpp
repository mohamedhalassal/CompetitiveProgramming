class Solution {
public:
    int search(vector<int>& num, int x) {
        int s = 0, e = num.size() - 1, mid, ans = -1;
        while (s <= e) {
            mid = (s + e) / 2;
            if (num[mid] == x) {
                ans = mid;
                break;
            } else if (num[mid] > x) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};