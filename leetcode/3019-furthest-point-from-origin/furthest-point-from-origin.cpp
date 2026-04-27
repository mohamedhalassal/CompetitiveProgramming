class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        map<char, int> mp;
        for (auto it : moves) {
            mp[it]++;
        }
        return max(abs(mp['L'] + mp['_'] - mp['R']),abs(mp['R'] + mp['_'] - mp['L']));
    }
};