import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        int c = 0;
        while (n > 0) {
            if ((n & 1) == 0) n >>= 1;
            else n--;
            c++;
        }
        System.out.println(c);
    }
}
