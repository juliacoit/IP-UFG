#include <stdio.h>
#include <stdlib.h>

int ** createMatrix (int nl, int nc);
void readMatrix (int ** M, int nl, int nc);
void freeMatrix(int **M, int nl);
void frequencia(int **M, int nl, int nc);

int main (){
    int nl, nc;
    scanf("%d %d", &nl, &nc);
    
    int ** M = createMatrix(nl, nc);
    
    readMatrix(M, nl, nc);
    frequencia(M, nl, nc);
    freeMatrix(M, nl);

    return 0;
}

int ** createMatrix (int nl, int nc){
    int i;
    int ** M = (int **)malloc(nl * sizeof(int*));
    
    for (i = 0; i < nl; i++){
        M[i] = (int *)malloc(nc * sizeof(int));
    }
    return M;
}

void readMatrix (int ** M, int nl, int nc){
    int l, c;
    for (l = 0; l < nl; l++){
        for (c = 0; c < nc; c++){
            scanf("%d", &M[l][c]);
        }
    }
}

void freeMatrix(int **M, int nl){
    int l;
    for (l = 0; l < nl; l++){
        free(M[l]);
    }
    free(M);
}

void frequencia (int ** M, int nl, int nc){
    int menorValor = M[0][0];
    int maiorValor = M[0][0];
    
    int l, c;

    for (l = 0; l < nl; l++){
        for (c = 0; c < nc; c++){
            if (M[l][c] < menorValor) {
                menorValor = M[l][c];
            }
            if (M[l][c] > maiorValor) {
                maiorValor = M[l][c];
            }
        }
    }

    int contMenor = 0;
    int contMaior = 0;

    for (l = 0; l < nl; l++){
        for (c = 0; c < nc; c++){
            if (M[l][c] == menorValor) {
                contMenor++;
            }
            if (M[l][c] == maiorValor) {
                contMaior++;
            }
        }
    }

    float totalElementos = (float)(nl * nc);
    float percMenor = (contMenor * 100.0f) / totalElementos;
    float percMaior = (contMaior * 100.0f) / totalElementos;

    printf("%d %.2f%%\n", menorValor, percMenor);
    printf("%d %.2f%%\n", maiorValor, percMaior);
}