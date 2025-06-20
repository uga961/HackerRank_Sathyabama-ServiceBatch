#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int num = n;
    int count = 0;
    while(n){
        n = n/10;
        count++;
    }
    int arr[count];
    for(int i=0;i<count;i++){
        arr[i] = num%10;
        num = num/10;
    }
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i=0;i<count;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
