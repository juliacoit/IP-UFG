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



    return 0;
}

int ehPermutacao( int matriz[500][500], int n, int *soma ){
    int i, j;
    int umColuna, vezesUmLinha = 0, *soma = 0;
    bool ehPerm = true;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            *soma = *soma + matriz[i][j];
            if (matriz[i][j] != 1 && matriz[i][j] != 0){
                ehPerm = false;
            }
            if (matriz[i][j] = 1) {
                vezesUmLinha++;
                umColuna = j;
            }
        }
        if (vezesUmLinha == 1) {
            if (matriz[i+1][umColuna] != 0){
                ehPerm = false;
            }
        }
        else {
            ehPerm = false;
        }
    }
    return &soma;
    
}
