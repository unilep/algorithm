import java.util.*;

class Solution {
    public int solution(int N) {
        // write your code in Java SE 8
        int T = N;
        List<Integer> list = new ArrayList<>();
        while(T > 0) {
            int X = T % 2;
            list.add(X);
            T /= 2;
        }
        Collections.reverse(list);
        int cnt = 0;
        int ans = 0;
        for(int i=0; i<list.size(); i++) {
            if(list.get(i) == 1) {
                if(ans < cnt) ans = cnt;
                cnt = 0;
            } else {
                cnt++;
            }
        }
        return ans;
    }
}
