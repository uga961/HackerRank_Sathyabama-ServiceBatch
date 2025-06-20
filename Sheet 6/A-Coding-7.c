#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long fs(int k) {
    if (k <= 0)
        return 0;
    if (k == 1)
        return 0;
    if (k == 2)
        return 1;
    long long a = 0, b = 1, sum = a + b, temp;
    for (int i = 2; i < k; i++) {
        temp = a + b;
        sum += temp;
        a = b;
        b = temp;
    }
    return sum;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    scanf("%d", &num);
    long long total = fs(num);
    printf("%lld\n", total);
    return 0;
}
