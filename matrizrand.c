#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **matNew(int nl, int nc);
void matFree(int **M, int nl);
void matInit(int **M, int nl, int nc, int min, int max);
void matPrint(int **M, int nl, int nc, char * post);

int main(){
    int ** A = matNew(3, 5);
    matInit(A, 3, 5, 0, 5);
    matPrint(A, 3, 5, "\n");
    matFree(A, 3);
    return 0;
}

int ** matNew(int nl, int nc){
    int i;
    int ** M = (int **)malloc(nl*sizeof(int*));

    for (i=0; i < nl;i++){
        M[i] = (int *)malloc(nc*sizeof(int));
    }
}

void matFree(int ** M, int nl){
    int i;
    for (i=0; i<nl;i++){
        free(M[i]);
    }
    free(M);
}

void matPrint(int ** M, int nl, int nc, char * post){
    int l, c;
    for (l=0; l< nl;l++){
        printf("|");
        for (c=0; c< nc; c++){
            printf("%5d", M[l][c]);
            printf("|\n");
        }
        if (post!=NULL) {
            printf("%s", post);
        }
    }
}

void matInit( int **M, int nl, int nc, int min, int max) {
    int l, c;
    srand(time(NULL));
    for (l = 0; l < nl; l++){
        for (c = 0; c < nc; c++){
            M[l][c] = rand()%(max+1);
        }
    }
}