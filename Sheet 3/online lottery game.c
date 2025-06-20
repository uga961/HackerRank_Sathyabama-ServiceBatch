#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int arr[n],temp,sum;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-2;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int p1 = arr[0]*arr[1];
    int p2 = arr[n-1]*arr[n-2];
    if(p1>p2){
        sum = arr[0]+arr[1];
    }
    else{
        sum = arr[n-1]+arr[n-2];
    }
    printf("%d",sum);
    return 0;
}
