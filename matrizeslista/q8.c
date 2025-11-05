#include <stdio.h>
#include <stdbool.h>

/**
* Função que verifica se a matriz é de permutação
* @param matriz Indica a matriz a ser verificada
* @param n indica a dimensão da matriz
* @param *soma parâmetro de saída, que armazenará a soma de todos os ’n’ elementos
da matriz.
* @return int
*/
int ehPermutacao( int matriz[500][500], int n, int *soma );

int main(){

    int ordem, soma, matriz[500][500];
    scanf("%d", &ordem);

    printf("%d\n", ordem);
    int ehPerm = ehPermutacao(matriz, ordem, &soma);

    if (ehPerm) {
        printf("PERMUTACAO\n");
    }
    else{
        printf("NAO EH PERMUTACAO\n");
    }
    printf("%d", soma);

    

    return 0;
}

int ehPermutacao( int matriz[500][500], int n, int *soma ){
    int i, j;
    int umColuna, vezesUmLinha = 0;
    bool ehPerm = true;
    int elNulo = n - 1;

    *soma = 0;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    } 

    for (i = 0; i < n; i++){
        int contNuloLinha = 0;
        for (j = 0; j < n; j++){
            *soma = *soma + matriz[i][j];
            if (matriz[i][j] == 0) {
                contNuloLinha++;
            }
            else if (matriz[i][j] != 1){
                ehPerm = false;
            }
        }
        if (contNuloLinha != elNulo) {
            ehPerm = false;
        }
    if (ehPerm == true) {
        int contNuloColuna;

        for (j = 0; j < 0; j++) {
            contNuloColuna = 0;
            for (i = 0; i < n; i++){
               if (matriz[i][j] == 0) { 
                    contNuloColuna++;
                }
            }
            if (contNuloColuna != elNulo) {
                ehPerm != false;
                break;
            }
        }
    }

    }
    if (ehPerm){
        return 1;
    }
    else {
        return 0;
    }
    return *soma;
}
