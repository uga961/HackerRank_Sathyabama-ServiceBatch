#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count30 = 0, count60 = 0;
    for(int i = 0; i < n; i++) {
        int amt = arr[i];
        if(amt == 30) {
            count30++;
        } else if(amt == 60) {
            if(count30 >= 1) {
                count30--;
                count60++;
            } else {
                printf("Transaction failed\n");
                return 0;
            }
        } else if(amt == 120) {
            if(count60 >= 1 && count30 >= 1) {
                count60--;
                count30--;
            } else if(count30 >= 3) {
                count30 -= 3;
            } else {
                printf("Transaction failed\n");
                return 0;
            }
        }
    }

    printf("Transaction successful\n");
    return 0;
}
