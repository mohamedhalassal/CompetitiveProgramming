class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans(*max_element(nums2.begin(), nums2.end())+1, -1), out;
    stack<int> st;
    for (int i = nums2.size() - 1; i >= 0; i--) {
        while (!empty(st) && nums2[i] > st.top()) {
            st.pop();
        }
        if (!empty(st)) {
            ans[nums2[i]] = st.top();
        }
        st.push(nums2[i]);
    }
    for (auto item : nums1)
        out.push_back(ans[item]);
    return out;
}
};