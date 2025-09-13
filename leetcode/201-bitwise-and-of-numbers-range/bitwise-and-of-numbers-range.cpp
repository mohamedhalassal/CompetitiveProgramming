class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        while (left < right) {
            right >>= 1;//decrese rigth to left
            left >>= 1;//delete any ones and zeros outside rigth after delete bit in this
            shift++;//count sifts to restore the common position
        }
        left <<= shift;
        return left;
    }
};