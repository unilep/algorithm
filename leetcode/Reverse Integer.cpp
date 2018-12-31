class Solution {
public:
    int reverse(int x) {
        long ans = 0l;
        while(x) {
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        return (ans > 2147483647 || ans < -2147483648) ? 0 : ans;
    }
};
