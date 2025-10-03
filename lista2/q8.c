#include <stdio.h>

int main(){

    int tamanho;
    scanf("%d", &tamanho);
    do{
        int vetor[tamanho];
        int i;
        int elemento, maior = 0;
        for (i = 0; i < tamanho; i++){
            scanf("%d", &elemento);

            vetor[i] = elemento;
                if (vetor[i] > maior) {
                    maior = vetor[i];
                }
        }
        // obtem o maior
        int j, k, contMenoresIgual = 0;
        for (j = 0; j <= maior; j++) {
            printf("(%d) ", j);
            for (k = 0; k < tamanho; k++){
            if (vetor[k] <= j) {
                contMenoresIgual++;
            }
        }
        printf("%d\n", contMenoresIgual);
        contMenoresIgual = 0;
        }
        scanf("%d", &tamanho);
    } while (tamanho != 0);

        return 0;
}