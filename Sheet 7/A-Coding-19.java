import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long r = sc.nextLong();
        long n = sc.nextLong();
        long ans = a;
        for (int i = 1; i < n; i++) ans *= r;
        System.out.println(ans);
    }
}
