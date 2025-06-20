#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d;
    scanf("%d",&n);
    if(n > -32786 && n < 32786){
        if(n%10 == 0){
            n = n/10;
        }
    if(n<0){
        n = n*-1;
        printf("-");
        while(n){
           d = n%10;
            n = n/10;
            printf("%d",d);
        }
    }
    else{
        while(n){
           d = n%10;
            n = n/10;
            printf("%d",d);
        }
    }
    }
    else{
        printf("Wrong value");
    }
    return 0;
}
