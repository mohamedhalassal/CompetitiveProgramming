class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for (auto& i : s) {
            if (i != '*')
                st.push(i);
            else
                st.pop();
        }
        string out;
        while (st.size()) {
            out.push_back(st.top());
            st.pop();
        }
        reverse(out.begin(), out.end());
        return out;
    }
};