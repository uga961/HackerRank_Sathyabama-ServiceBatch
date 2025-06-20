#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100], key[100];
    scanf("%s", inputString);
    scanf("%s", key);

    int len1 = strlen(inputString);
    int len2 = strlen(key);

    char output[100];
    int k = 0;

    for (int i = 0; i < len2; i++) {
        for (int j = 0; j < len1; j++) {
            if (key[i] == inputString[j]) {
                output[k++] = inputString[j];
            }
        }
    }

    output[k] = '\0';

    printf("%s\n", output);

    return 0;
}
