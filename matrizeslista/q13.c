#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int ** createMatrix (int d);
void readMatrix (int ** M, int d);
void freeMatrix(int **M, int d);
void bissimetricMatrix(int **M, int d);

int main (){

    int d;
    scanf("%d", &d);
    if (d > 10){
        printf("dimensao invalida");
        return 1;
    }
    int ** M = createMatrix(d);
    readMatrix(M, d);
    bissimetricMatrix(M, d);
    freeMatrix(M, d);

    return 0;
}

int ** createMatrix (int d){
    int i;
    int ** M = (int **)malloc(d * sizeof(int*));
    
    for (i = 0; i < d; i++){
        M[i] = (int *)malloc(d * sizeof(int));
    }
    return M;
}

void readMatrix (int ** M, int d){
    int l, c;
    for (l = 0; l < d; l++){
        for (c = 0; c < d; c++){
            scanf("%d", &M[l][c]);
        }
    }
}

void freeMatrix(int **M, int d){
    int l;
    for (l = 0; l < d; l++){
        free(M[l]);
    }
    free(M);
}

void bissimetricMatrix(int **M, int d){
    int l, c;
    bool ehBi = true;

    for (l = 0; l < d; l++){
        for (c = 0; c < d; c++){
            if (M[l][c] != M[c][l]){
                ehBi = false;
            }
            if (M[l][c] != M[d-1-c][d-1-l]){
                ehBi = false;
            }

        }
    }
    if (ehBi) {
    printf("bissimetrica\n");
    } else {
    printf("nao bissimetrica\n");
    }
}