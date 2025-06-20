#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;

        while (result % 10 == 0)
            result /= 10;

        result %= 100000;
    }
    
    while (result % 10 == 0)
        result /= 10;

    printf("%d\n", result % 10);

    return 0;
}
