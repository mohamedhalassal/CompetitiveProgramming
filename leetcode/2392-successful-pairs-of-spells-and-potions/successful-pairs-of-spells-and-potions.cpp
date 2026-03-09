class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        int psz = potions.size();
        sort(potions.begin(), potions.end());
        // i take the spell and going to check it
        for (int i = 0; i < spells.size(); i++) {
            // i going to search to the the position of firs number is \leq the
            // success
            int l = 0, r = psz - 1, mid, an = -1;
            while (l <= r) {
                mid = (l + r) / 2;
                if ((long long)spells[i] * potions[mid] >= success) {
                    r = mid - 1;
                    an = mid;
                } else {
                    l = mid + 1;
                }
            }
            ans.push_back((an == -1) ? 0 : psz - an);
        }
        return ans;
    }
};

/*
[1,2,3,4,5]   [5,1,3]

2 8 1 3 4     4  2 8   sucsess = 10
1 2 3 4 8
4 8 12 16 32

i searching of the first number i mult this to the spell number is a greter than
or equel the sucsess and get the idx and substact this to the size of the
potions

i runing in all spells is a o(n) and binary search of potions in o(log n) --->
o(n log n)
*/