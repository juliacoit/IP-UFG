#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    int maior, somaMenores;
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    // descobre o maior (do seu jeito, sem array)
    if (n1 >= n2 && n1 >= n3 && n1 >= n4) {
        maior = n1;
    }
    else if (n2 >= n1 && n2 >= n3 && n2 >= n4) {
        maior = n2;
    }
    else if (n3 >= n1 && n3 >= n2 && n3 >= n4) {
        maior = n3;
    }
    else {
        maior = n4;
    }

    // soma total - maior = soma dos 3 menores
    somaMenores = (n1 + n2 + n3 + n4) - maior;

    printf("%d\n", somaMenores);

    return 0;
}
