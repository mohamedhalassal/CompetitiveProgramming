class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int counter = 0;
        vector<int> sortedArray = heights;
        sort(sortedArray.begin(),sortedArray.end());
        for (int i = 0; i < heights.size(); i++) {
            if (sortedArray[i] != heights[i])
                counter++;
        }
        return counter;
    }
};