#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("[");
    for(int i = 0;i<n;i++){
        printf("%d, ",arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(i!=n-1){
        printf("%d, ",arr[i]);}
        else{
            printf("%d",arr[i]);
        }
    }
    printf("]");
    
    return 0;
}
