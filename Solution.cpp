class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;
        for (int bit = 0; bit < 32; bit++) {
            cnt += ((n & (1 << bit)) > 0);
        }
        return cnt;
    }
};
