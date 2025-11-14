#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char a[10001], b[10001];
        scanf("%s %s", a, b);
        int total_ops = 0;
        int len = strlen(a);
        int i;
        for (i = 0; i < len; i++) {
            int diff = b[i] - a[i];
            if (diff < 0) {
                diff += 26;
            }
            total_ops += diff;
        }
        printf("%d\n", total_ops);
    }
    return 0;
}