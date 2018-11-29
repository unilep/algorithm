// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
        long len = A.length + 1;
        long ans = len*(len+1)/2;
        for(int k : A) {
            ans -= k;
        }
        return (int)ans;
    }
}
