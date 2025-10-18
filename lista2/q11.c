#include <stdio.h>

#define N 101

int main(){

int tamanho;
scanf("%d", &tamanho);

if (tamanho <= 0 || tamanho > 1000000) {
        return 1; // Termina se o tamanho for invalido
    }

int vetor[N], i, j, repete = 0, l;
for (l = 0; l < tamanho; l++) {
    scanf("%d", &vetor[l]);
}
int maxContagem = 0, maisFrequente = vetor[0];
for (i = 0; i < tamanho; i++) {
    repete = 0;
    for (j = 0; j < tamanho; j++) {
        if ( vetor[i] == vetor[j]) {
        repete++;
        // valor no indice i repete tal vezes
        }
    }
    if (repete > maxContagem) {
            maxContagem = repete;
            maisFrequente = vetor[i];
        }
    }
    printf("%d\n", maisFrequente);
    printf("%d\n", maxContagem);

return 0;
}