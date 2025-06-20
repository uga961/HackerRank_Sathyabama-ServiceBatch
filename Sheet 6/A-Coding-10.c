#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//     long long n,num;
//     scanf("%lld",&n);
//     long long d = 1;
//     long long a = n;
//     if (n == 0) {
//         printf("a");
//         return 0;
//     }
//     while(a){
//         a = a/10;
//         d = d*10;
//     }
//     d = d/10;
//     while(n){
//         num = n/d;
//         n = n%d;
//         switch(num){
//             case 0: printf("a");break;
//             case 1: printf("b");break;
//                 case 2: printf("c");break;
//                 case 3: printf("d");break;
//                 case 4: printf("e");break;
//                 case 5: printf("f");break;
//                 case 6: printf("g");break;
//                 case 7: printf("h");break;
//                 case 8: printf("i");break;
//                 case 9: printf("j");break;  
//         }
//        d = d/10;
//     }
//     return 0;
// }


int main() {
    char b[20];
    scanf("%s", b);  

    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] >= '0' && b[i] <= '9') {
            printf("%c", 'a' + (b[i] - '0'));
        }
    }

    return 0;
}