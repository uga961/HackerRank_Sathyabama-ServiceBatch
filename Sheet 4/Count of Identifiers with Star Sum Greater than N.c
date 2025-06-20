#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ss(int n){
    int sum = 0;
    while(n){
        sum = sum + n;
        n = n/10;
    }
    return sum;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int count=0,s;
    scanf("%d",&n);
    for(int i = n; i>=0;i--){
        s = ss(i);
        if(s > n){
            count++;
        }
        else{
            break;
        }
    }
    printf("%d",count);
    return 0;
}
