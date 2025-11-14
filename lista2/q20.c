#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N <= 0) {
        return 0;
    }

    int prev, i;
    scanf("%d", &prev);
    printf("%d\n", prev);

    for (i = 1; i < N; i++) {
        int current;
        scanf("%d", &current);
        if (current != prev) {
            printf("%d\n", current);
            prev = current;
        }
    }
    return 0;
}