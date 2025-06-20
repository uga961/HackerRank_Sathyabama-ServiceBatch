#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char a[100000];
    scanf("%s",a);
    int sum, total = 0;
    int l = strlen(a);
    for(int i = 0; i < l - 1; i++) {
    sum = abs(a[i] - a[i + 1]);
    total += sum;
}

    printf("%d",total);
    return 0;
}
