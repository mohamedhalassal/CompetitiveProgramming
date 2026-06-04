class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp, mp2;
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        for (auto it : mp) {
            mp2[it.second]++;
            if (mp2[it.second] > 1)
                return false;
        }
        return true;
    }
};