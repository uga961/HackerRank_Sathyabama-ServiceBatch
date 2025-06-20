#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    if(n<=50){
        printf("Average");
    }
    else if (n>=81){
        printf("Outstanding");
    }
    else if (n>=51 && n<=60){
        printf("Good");
    }
    else{
        printf("Excellent");
    }
    return 0;
}
