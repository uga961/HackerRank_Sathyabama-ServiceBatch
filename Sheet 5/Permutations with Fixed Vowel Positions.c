#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int n){
    long long val = 1;
    for(int i = 1; i <= n; i++){
        val = val * i;
    }
    return val;
}

int main() {

    char s[100000];
    scanf("%s", s);
    int l = strlen(s);
    int count = 0;
    for(int i=0;i<l;i++){
        s[i] = toupper(s[i]);
    }
    
    int vf[256] = {0}; 
    int cf[256] = {0}; 

    for(int i = 0; i < l; i++) {
        switch(s[i]) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                // vf[s[i]]++;
                break;
            // default:
            //     cf[s[i]]++;
        }
    }

    int c = l - count;

    // int vp = fact(count);
    // for(int i = 0; i < 256; i++) {
    //     if(vf[i] > 1) {
    //         vp = vp / fact(vf[i]);
    //     }
    // }

    long long cp = fact(c);
    // for(int i = 0; i < 256; i++) {
    //     if(cf[i] > 1) {
    //         cp = cp / fact(cf[i]);
    //     }
    // }
    if(c==0){
        printf("0");
        // return 0;
    }
    else{
    //int t = cp * vp;
    printf("%lld", cp);
    }

}
