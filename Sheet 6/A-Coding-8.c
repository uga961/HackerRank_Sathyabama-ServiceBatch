#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int num,sum=0;
    while(n){
        num = n%10;
        for(int i=2;i<num;i++){
            if(num%i==0){
                sum = sum + num;
                break;
            }
        }
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}
