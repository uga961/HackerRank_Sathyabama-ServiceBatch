#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int nb = a/80;
    int rem = a%80;
    int ns = rem/8;
    int rems = rem%8;
    if(rems != 0){
        ns = ns+1;
    }
    int bc = nb*b*75;
    int sc = ns*c*75;
    int total = bc+sc;
    printf("%d",total);
}