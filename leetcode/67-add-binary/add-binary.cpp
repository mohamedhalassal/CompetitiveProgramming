class Solution {
public:
    string addBinary(string a, string b) {
        if (a.size() < b.size())
            swap(a, b);
        int k = a.size() - b.size();
        for (int i = 0; i < k; i++) {
            b = '0' + b;
        }

        string h = "";
        char c = '0';
        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] == b[i]) {
                if (a[i] == '0') {
                    if (c == '1')
                        h += '1', c = '0';
                    else
                        h += '0';
                } else {
                    if (c == '1') {
                        h += '1', c = '1';
                    } else {
                        h += '0', c = '1';
                    }
                }
            } else {
                if (c == '1') {
                    h += '0', c = '1';
                } else {
                    h += '1';
                }
            }
        }
        if (c == '1')
            h += c;
        reverse(h.begin(), h.end());
        return h;
    }
};