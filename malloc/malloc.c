#include <stdio.h>
#include <stdlib.h> // Para malloc() e free()

int main() {
    int *numeros;
    int tamanho = 3;

    // 1. Alocar memória
    numeros = (int*) malloc(tamanho * sizeof(int));

    // 2. Verificar se a alocação falhou
    if (numeros == NULL) {
        printf("Falha ao alocar memória!\n");
        return 1; // Termina o programa com erro
    }

    printf("Memória alocada com sucesso.\n");

    // 3. Usar a memória (como um array)
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;

    printf("Valores: %d, %d, %d\n", numeros[0], numeros[1], numeros[2]);

    // 4. Liberar a memória quando terminar
    free(numeros);
    numeros = NULL; // Boa prática

    printf("Memória liberada.\n");

    return 0;
}