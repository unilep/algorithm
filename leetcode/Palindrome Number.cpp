class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        int k = x;
        int r = 0;
        while(x) {
            r = r * 10 + x % 10;
            x /= 10;
        }
        return k == r;
    }
};
