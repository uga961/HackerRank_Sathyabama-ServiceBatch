import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        while (x > 26) {
            int s = 0;
            while (x > 0) {
                s += x % 10;
                x /= 10;
            }
            x = s;
        }
        if (x == 0) System.out.println(-1);
        else System.out.println((char)('A' + x - 1));
    }
}
