#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int arr[n],ms,sum;
    int temp;
    for(int i= 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
           if(arr[j]>arr[j+1]){
               temp = arr[j];
               arr[j]= arr[j+1];
               arr[j+1] = temp;
           } 
        }
    }
    ms = arr[0]+arr[n-1];
    for(int i = 1;i<n/2;i++){
        sum = arr[i]+arr[n-1-i];
        if(sum>ms){
            ms = sum;
        }
    }
    printf("%d",ms);
    return 0;
}
