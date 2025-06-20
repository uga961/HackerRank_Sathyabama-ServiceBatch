#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int i = 1;
    int S = 0, C = 0;

    while (i*i <= N || i*i*i <= N) {
        if (i*i <= N) {
            S = i*i;
        }
        if (i*i*i <= N) {
            C = i*i*i;
        }
        i++;
    }

    int T = S + C;
    printf("%d\n", T);

    return 0;
}
