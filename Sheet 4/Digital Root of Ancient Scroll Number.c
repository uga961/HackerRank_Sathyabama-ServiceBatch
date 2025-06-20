#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sd(int n){
    int d,sum;
    while(n){
        d = n%10;
        n = n/10;
        sum = sum + d;
    }
    return sum;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,d;
    scanf("%d",&n);
    int sum = sd(n);
    if(sum>9){
        sum = sd(sum);
    }
    printf("%d",sum);
    return 0;
}

