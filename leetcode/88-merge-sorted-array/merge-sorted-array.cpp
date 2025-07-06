class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int> merge;
        for (auto it : nums1)
            if (m) {
                merge.insert(it);
                m--;
            }
        for (auto it : nums2)
            if (n) {
                merge.insert(it);
                n--;
            }
        int i = 0;
        for (auto it : merge) {
            nums1[i++] = it;
            cout << it << " ";
        }
    }
};