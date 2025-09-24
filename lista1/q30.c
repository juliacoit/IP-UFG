#include <stdio.h>

int main() {
    int linha_inicial, linha_final, n, p;

    scanf("%d %d", &linha_inicial, &linha_final);

    for (n = linha_inicial; n <= linha_final; n++) {
        long long valor = 1;
        for (p = 0; p <= n; p++) {
            if (p == 0) {
                printf("%lld", valor);
            } else {
                printf(",%lld", valor);
            }
            
            if (p < n) {
                valor = valor * (n - p) / (p + 1);
            }
        }
        printf("\n");
    }

    return 0;
}