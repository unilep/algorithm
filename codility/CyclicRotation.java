// you can also use imports, for example:
import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int[] solution(int[] A, int K) {
        // write your code in Java SE 8
        Deque<Integer> dq = new LinkedList<>();
		for(int i=0; i<A.length; i++) {
		    dq.addLast(A[i]);
		}
		while(K-- > 0 && !dq.isEmpty()) {
			int V = dq.removeLast();
			dq.addFirst(V);
		}
		int idx = 0;
		Iterator<Integer> it = dq.iterator();
		while(it.hasNext()) {
			int V = it.next();
			A[idx++] = V;
		}
		return A;
    }
}
