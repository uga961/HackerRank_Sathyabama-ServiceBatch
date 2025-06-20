#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long n,b;
    scanf("%lld %lld",&n,&b);
    int count=0,num;
    while(n){
        num = n%10;
        n = n/10;
        if(num !=b){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
