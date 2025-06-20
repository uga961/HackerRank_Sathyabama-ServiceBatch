#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    scanf("%s", str);

    int sum = 0, count = 1;
    int len = strlen(str);

    for(int i = 1; i <= len; i++) {
        if(str[i] == str[i-1]) {
            count++;
        } else {
            if(count % 2 == 0) {
                sum += count;
            }
            count = 1;
        }
    }

    printf("%d\n", sum);
    return 0;
}
