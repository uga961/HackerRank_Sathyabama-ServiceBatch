#include <stdio.h>

int main() {
    int H, M;
    scanf("%d", &H);
    scanf("%d", &M);

    if (H >= 24 || M >= 60) {
        int extra_hours = (H >= 24) ? (H - 24) : 0;
        int extra_minutes = (M >= 60) ? (M - 60) : 0;

        extra_hours += extra_minutes / 60;
        extra_minutes = extra_minutes % 60;

        printf("-%d::%d", extra_hours, extra_minutes);
    } else {
        int total_minutes_in_day = 24 * 60;
        int current_minutes = H * 60 + M;
        int remaining_minutes = total_minutes_in_day - current_minutes;

        int rem_hours = remaining_minutes / 60;
        int rem_minutes = remaining_minutes % 60;

        printf("%02d::%02d", rem_hours, rem_minutes);
    }

    return 0;
}
