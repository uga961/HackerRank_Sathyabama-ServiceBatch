import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong(), tmp = n, digs = 0;
        while (tmp > 0) { digs++; tmp /= 10; }
        long m = n, sum = 0; int even = 0, odd = 0;
        while (m > 0) {
            int d = (int)(m % 10);
            if ((d & 1) == 0) even += d; else odd += d;
            long p = 1; for (int i = 0; i < digs; i++) p *= d;
            sum += p;
            m /= 10;
        }
        System.out.println(sum == n ? even : odd);
    }
}
