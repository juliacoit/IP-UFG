#include <stdio.h>

int main() {
    int n, d1, d2; // O número que a soma dos dados deve gerar
    int k = 0; // O contador para a quantidade de possibilidades

    // Lê o número inteiro n da entrada
    scanf("%d", &n);

    // O primeiro laço representa o primeiro dado (D1), de 1 a 6
    for (d1 = 1; d1 <= 6; d1++) {
        // O segundo laço representa o segundo dado (D2), de 1 a 6
        for (d2 = 1; d2 <= 6; d2++) {
            // Verifica as duas condições ao mesmo tempo:
            // 1. A soma dos dados é igual a n?
            // 2. O valor dos dois dados é diferente?
            if ((d1 + d2 == n) && (d1 != d2)) {
                // Se as duas condições forem verdadeiras, é uma combinação válida
                printf("D1: %d, D2: %d\n", d1, d2);
                k++; // Incrementa o nosso contador de possibilidades
            }
        }
    }

    // Após verificar todas as 36 combinações possíveis...
    // Verificamos se encontramos alguma possibilidade
    if (k > 0) {
        // Se k for maior que zero, encontramos combinações
        printf("Ha %d possibilidades\n", k);
    } else {
        // Se k continuar sendo zero, nenhuma combinação foi encontrada
        printf("Combinacao impossivel\n");
    }

    return 0;
}