// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
        boolean[] check = new boolean[A.length + 1];
        for(int k : A) {
            if(k > A.length || check[k]) return 0;
            check[k] = true;
        }
        for(int i=1; i<=A.length; i++) {
            if(!check[i]) return 0;
        }
        return 1;
    }
}
