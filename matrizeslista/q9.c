#include <stdio.h>

#define MAXN 1000

int A[MAXN][MAXN];

int main() {
    int N;
    scanf("%d", &N);

    long long trace = 0;
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
            if (i == j) {
                trace += A[i][j];
            }
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            long long result_val = (trace * (long long)A[i][j]) + (long long)A[j][i];
            
            printf("%lld", result_val);
            
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}