import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double b1 = sc.nextDouble(), h1 = sc.nextDouble();
        double b2 = sc.nextDouble(), h2 = sc.nextDouble();
        double a1 = (b1 * h1) / 2.0, a2 = (b2 * h2) / 2.0;
        System.out.printf("%.6f", Math.max(a1, a2));
    }
}
