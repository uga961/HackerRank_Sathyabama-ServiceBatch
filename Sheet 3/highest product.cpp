#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n == 2) { printf("1\n"); return 0; }
    if (n == 3) { printf("2\n"); return 0; }
    if (n == 4) { printf("4\n"); return 0; }
    long long p = 1;
    while (n > 4) {
        p *= 3;
        n -= 3;
    }
    p *= n;
    printf("%lld\n", p);
    return 0;
    return 0;
}
