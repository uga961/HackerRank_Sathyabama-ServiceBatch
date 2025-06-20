#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[100000];
    fgets(s, sizeof(s),stdin);
    int l = strlen(s);
    int a[6] = {0};
    for(int i=0;i<l;i++){
        switch(s[i]){
            case 'A': a[1]++;break;
                case 'E': a[2]++;break;
            case 'I': a[3]++; break;
            case 'O': a[4]++;break;
            case 'U': a[5]++;break;   
        }
    }
    int num;
   int max=0;
    for(int i=0;i<6;i++){
        if(a[i]>max){
            max= a[i];
            num=i;
        }
    }
    if (max==0){
        printf("No vowels found");
    }
    else{
        switch(num){
            case 1: printf("A:"); break;
            case 2: printf("E:"); break;
            case 3: printf("I:"); break;
            case 4: printf("O:"); break;
            case 5: printf("U:"); break;
        }
        printf("%d",max);
    }
    return 0;
}
