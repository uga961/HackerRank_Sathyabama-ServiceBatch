#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,count=0,rem,num;
    scanf("%d",&n);
    for(int i=1;i<n/2;i++){
        rem = n % i;
        num = n / i;
        if(rem == 0 && num != i &&  num > i){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
