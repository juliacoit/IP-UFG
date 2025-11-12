#include <stdio.h>

int ** createMatrix (int nl, int nc);
void readMatrix (int ** M, int nl, int nc);
void freeMatrix();
float freqMaior ();
float freqMenor ();

int main (){

    int nl, nc;
    scanf("%d%d", &nl, &nc);
    int ** M = createMatrix(nl, nc);

    return 0;
}

int ** createMatrix (int nl, int nc){
    int i;
    int ** M = (int **)malloc(nl*sizeof(int*));

    for (i=0; i < nl;i++){
        M[i] = (int *)malloc(nc*sizeof(int));
    }

    return ** M;
}

void readMatrix (int ** M, int nl, int nc){
    int l, c;
    for (l = 0; l < nl; l++){
        for (c = 0; c < nc; c++){
            scanf("%d", &M[l][c]);
        }
    }
}