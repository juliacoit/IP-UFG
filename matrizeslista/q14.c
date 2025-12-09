#include <stdio.h>

#define MAXN 1000

int A[MAXN][MAXN];

int main() {
    int N;
    scanf("%d", &N);

    int i, j, k;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (j = 0; j < N; j++) {
        for (i = 1; i < N; i++) {
            int key = A[i][j];
            k = i - 1;

            while (k >= 0 && A[k][j] > key) {
                A[k + 1][j] = A[k][j];
                k = k - 1;
            }
            A[k + 1][j] = key;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d", A[i][j]);
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}