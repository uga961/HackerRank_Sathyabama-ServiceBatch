#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    float h[n],w[n];
    for(int i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&w[i]);
    }
    float bmi;
    int count=0;
    int max;
    scanf("%d",&max);
    for(int i=0;i<n;i++){
       bmi = (w[i]/h[i])*10;
        if(bmi<=max){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
