public class Solution {
    public bool DoesValidArrayExist(int[] derived) {
        int n = derived.Length;
        int[] o = new int[n];
        o[0] = 0;
        for (int i = 1; i < n; i++) {
            o[i] = o[i - 1] ^ derived[i - 1];
        }
        if ((o[0] ^ o[n - 1]) != derived[n - 1]) {
            return false;
        } else {
            return true;
        }
    }
}
