#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int current = a;
    int first = 1;

    printf("{");
    while (current <= c) {
        if (!first)
            printf(",");
        printf("%d", current);
        first = 0;
        current *= b;
    }
    printf("}");
    return 0;
}
