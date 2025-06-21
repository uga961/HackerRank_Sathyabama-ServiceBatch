import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Set<Integer> cubes = new HashSet<>();
        for (int i = 1; i * i * i < 100000; i++) cubes.add(i * i * i);
        int count = 0;
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            if (cubes.contains(x)) count++;
        }
        System.out.println(count);
    }
}
