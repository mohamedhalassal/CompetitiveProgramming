class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp, check;
        for (auto it : arr)
            mp[it]++;
        for (auto it : mp)
            check[it.second]++;
        for (auto it : check)
            if (it.second > 1)
                return false;
        return true;
    }
};