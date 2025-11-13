#include <stdio.h>
#include <stdlib.h>

int ** createMatrix (int nl, int nc);
void readMatrix (int ** M, int nl, int nc);
void freeMatrix(int **M, int nl, int nc);
void frequencia(int **M, int nl, int nc);

int main (){

    int nl, nc;
    scanf("%d%d", &nl, &nc);
    int ** M = createMatrix(nl, nc);
    readMatrix(M, nl, nc);
    frequencia(M, nl, nc);
    freeMatrix(M, nl, nc);


    return 0;
}

int ** createMatrix (int nl, int nc){
    int i;
    int ** M = (int **)malloc(nl*sizeof(int*));

    for (i=0; i < nl;i++){
        M[i] = (int *)malloc(nc*sizeof(int));
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

void freeMatrix(int **M, int nl, int nc){
    int l, c;
    for (l = 0; l < nl; l++){
            free(M[l]);
        }
    free(M);
}

void frequencia (int ** M, int nl, int nc){
    int ** freq = createMatrix(nl, nc);
    int i, j, l, c;
    int freqNum = 0;
    for (i =0; i < nl; i++){
        for (j=0; j <nc; j++){
            for (l =0; l < nl; l++){
                for (c=0; c <nc; c++){
                    if (M[i][j] == M[l][c]){
                        freqNum++;
                        freq[i][j] = freqNum;
                    }

                }
            }
            freqNum =0;

        }
    }
    int maiorFreq = freq[0][0];
    int menorFreq = freq[0][0];
    int maiorNum = M[0][0];
    int menorNum = M[0][0];
    for (i =0; i < nl; i++){
        for (j=0; j <nc; j++){
            if (maiorFreq < freq[i][j]) {
                maiorFreq = freq[i][j];
                maiorNum = M[i][j];
            }
            if (menorFreq > freq[i][j]) {
                menorFreq = freq[i][j];
                menorNum = M[i][j];
            }
        }
    }
    float menorPercent, maiorPercent;
    menorPercent = (float)(menorFreq*100)/(float)(nl*nc);
    maiorPercent = (float)(maiorFreq*100)/(float)(nl*nc);

    printf("%d %.2f%%\n%d %.2f%%\n", maiorNum, maiorPercent, menorNum, menorPercent);
    freeMatrix(freq, nl, nc);
}
