class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) {
            return s;
        }
        string ans;
        char** C = new char*[numRows + 1];
        for(int i=0; i<numRows+1; i++) {
            C[i] = new char[s.length()];
            for(int j=0; j<s.length(); j++) {
                C[i][j] = ' ';
            }
        }
        int dx[] = { 1, -1 };
        int dy[] = { 0, 1 };
        bool down = true;
        int x = -1, y = 0;
        for(int i=0; i<s.length(); i++) {
            int k = down ? 0 : 1;
            x = x + dx[k];
            y = y + dy[k];
            C[x][y] = s[i];
			
            if(i > 0 && i % (numRows - 1) == 0) {
                down = false;
            }
			if(i > 0 && x == 0) {
				down = true;
			}
        }
        for(int i=0; i<numRows+1; i++) {
            for(int j=0; j<s.length(); j++) {
                if(C[i][j] != ' ') {
                    ans += C[i][j];
                }
            }
        }
        return ans;
    }
};
