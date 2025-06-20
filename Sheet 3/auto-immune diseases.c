#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a];
    int days=0;
    int rem,d;
    int t,tr,total,dr;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    if(b==1){
        printf("%d Days",a);
    }
    else{
        for(int i=0;i<a;i++){
       if(arr[i]>=81 || arr[i]<=10){
           days++;
       }    
        }
        d = days/b;
        dr = days%b;
        if(dr!=0){
            d = d+1;
        }
        int r = b-dr;
        rem =  a - days-r;
        t = rem/b;
        tr = rem % b;
        if(tr!=0){
            t = t+1;
        }
        total = d+t;
        if(total !=1){
        printf("%d Days",total);}
        else{
            printf("1 Day");
        }
    }
    return 0;
}
