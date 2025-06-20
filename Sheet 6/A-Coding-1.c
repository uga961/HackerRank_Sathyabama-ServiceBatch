#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char arr[100000];
    fgets(arr, sizeof(arr), stdin);
    //scanf("%s",arr);
    int count = 0;
    int l = strlen(arr);
    for(int i=0;i<l;i++){
        switch(arr[i]){
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
                count ++;
                break;     
        }
    }
    printf("%d",count);
    return 0;
}
