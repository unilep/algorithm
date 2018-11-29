// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
        int ans = 987654321;
        int max = 0;
        for(int k : A) max += k;
        int sum = 0;
        for(int i=0; i<A.length-1; i++) {
            max -= A[i];
            sum += A[i];
            int k = Math.abs(max - sum);
            if(ans > k) ans = k;
        }
        return ans;
    }
}
