#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char borda, fundo;
    int i, j;
    int center;
    int dist;

    scanf("%d %c %c", &n, &borda, &fundo);

    if (n % 2 == 0) {
        printf("Dimensao invalida!\n");
        return 0;
    }

    center = n / 2;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            
            dist = abs(i - center) + abs(j - center);

            if (dist == center) {
                printf("%c ", borda);
            } else if (dist < center) {
                printf("%c ", fundo);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}