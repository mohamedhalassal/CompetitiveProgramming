class Solution {
public:
    bool isPalindrome(long long x) {
        if(x<0)return false;
        long long n = 0, k = x;
        while (x != 0) {
            n = n * 10 + x % 10;
            x /= 10;
        }
        return (n == k);
    }
};