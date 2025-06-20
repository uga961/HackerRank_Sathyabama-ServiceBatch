#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    long long arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    long long mp = arr[0]*arr[1];
    long long sum= arr[0] + arr[1];;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]*arr[j]<=mp){
                sum = arr[i]+arr[j];
                mp = arr[i]*arr[j];
            }
        }
    }
    printf("%lld",sum);
    return 0;
}
