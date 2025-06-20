#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int count = 0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("%d",n/i);
            
            count++;
            break;
        }
    }
    if(count==0){
        printf("%d",n-1);
    }
    return 0;
}
