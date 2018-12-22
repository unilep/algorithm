class Solution {
public:
    int D[1001][1001];
    int palindrome(int i, int j, const string& s) {
        if(i == j) {
            return D[i][j] = 1;   
        }
        if(i + 1 == j) {
            return D[i][j] = (s[i] == s[j] ? 2 : 0);
        }
        if(D[i][j] != -1) {
            return D[i][j];
        }
        if(s[i] != s[j]) {
            return D[i][j] = 0;
        }
        int k = palindrome(i+1, j-1, s);
        return D[i][j] = k > 0 ? (palindrome(i+1, j-1, s) + 2) : 0;
    }
    
    string longestPalindrome(string s) {
        memset(D, -1, sizeof(D));
        string ans;
        const int len = s.length();
        for(int i=0; i<len; i++) {
            for(int j=i; j<len; j++) {
                if(j - i + 1 <= ans.length()) {
                    continue;
                }
                int k = palindrome(i, j, s);
                if(ans.length() < k) {
                    ans = s.substr(i, j - i + 1);
                }
            }
        }
        
        return ans;
    }
};
