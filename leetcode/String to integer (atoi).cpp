class Solution {
public:
    int myAtoi(string str) {
        long ans = 0l;
        const int len = str.length();
        int start = 0;
        for(int i=0; i < len; i++) {
            start = i;
            if(str[i] != ' ') {
                break;
            }
        }
        bool minus = false;
        if(str[start] == '-' || str[start] == '+') {
            if(str[start] == '-') {
                minus = true;
            }
            start++;
        }
        
        for(int i=start; i<len; i++) {
            if(ans == 0 && (str[i] > '9' || str[i] < '0')) {
                return 0;
            }
            if(ans != 0 && (str[i] > '9' || str[i] < '0')) {
                break;
            }
            ans = ans * 10l + (str[i] - '0');
            if(ans > INT_MAX) {
                return minus ? INT_MIN : INT_MAX;
            }
            if(ans < INT_MIN) {
                return minus ? INT_MAX : INT_MIN;
            }
        }
        
        return minus ? -ans : ans;
    }
};
