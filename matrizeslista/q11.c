#include <stdio.h>
#define N 500

int main(){

    int nl, nc, i, j;
    int m[N][N];
    scanf("%d%d", &nl, &nc);

    if (nl <= 0 || nc <= 0) {
        printf("dimensao invalida\n");
        return 0;
    }

    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++){
            scanf("%d", &m[i][j]);
        }
    }
    int x, y, countEl = 0, totalIndex = nl*nc, countUnicos = 0;
    int elUnicos[totalIndex];

    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++){
            int elemento = m[i][j];
            for (y = 0; y < nl; y++){
                for (x = 0; x < nc; x++){
                    if (elemento == m[y][x]) {
                        countEl++;
                    }
            }
            }
            if (countEl = 1) {
                // o "elemento" eh unico
                countUnicos++;
                elUnicos[j] = elemento;
            }
            countEl = 0;
        }
    }
    if (countUnicos == 0) {
        printf("sem elementos unicos");
    }
    else {
    int z;
    for (z = 0; z < countUnicos; z++){
        printf("%d", elUnicos[z]);
        if (z < countUnicos-1){
            printf(",");
            }
        }
    }

    return 0;
}