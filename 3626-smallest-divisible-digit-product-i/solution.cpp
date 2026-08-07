class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = 0;
        for (int i = n; i < n + 10; i++) {
            int x = i;
            int product = 1;

            while (x > 0) {
                product *= (x % 10);
                x /= 10;
            }

            if (product % t == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
