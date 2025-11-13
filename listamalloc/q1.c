#include <stdio.h>
#include <stdlib.h>

void fracEq (int tamSeq);

int main () {

    int testes, x = 0;
    scanf("%d", &testes);

    while (x < testes) {
        int tamSeq;

        printf("Caso de teste %d\n", x+1);
        scanf("%d", &tamSeq);

        fracEq(tamSeq);

        x++;
    }

    return 0;
}

void fracEq (int tamSeq){
    int * numerador = malloc(tamSeq * sizeof(int));
    int * denominador = malloc(tamSeq * sizeof(int));

    if (numerador == NULL || denominador == NULL) {
        return;
    }

    int i, j, temEq = 0;
    for (i = 0; i < tamSeq; i++){
        scanf("%d/%d", &numerador[i], &denominador[i]);
    }

    for (i = 0; i < tamSeq; i++){
        for (j = i+1; j < tamSeq; j++){
            if ((long long)numerador[i] * denominador[j] == (long long)numerador[j] * denominador[i]){
            printf("%d/%d equivalente a %d/%d\n", numerador[i], denominador[i], numerador[j], denominador[j]);
            temEq = 1;
            }
        }
    }
    if (temEq == 0){
        printf("Nao ha fracoes equivalentes na sequencia\n");
    }
    free(numerador);
    free(denominador);
}