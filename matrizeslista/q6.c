#include <stdio.h>
#define NL 102
#define NC 102

void drawBorders(int nc, int nl, int tamBorda, int valorBorda);

int main(){

int largura, altura, lborda, valorborda;
scanf("%d%d%d%d", &largura, &altura, &lborda, &valorborda);
drawBorders(largura, altura, lborda, valorborda);


return 0;
}

void drawBorders(int nc, int nl, int tamBorda, int valorBorda){
    int i, j;
    int m[NL][NC];
    for (i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
           if (i <= tamBorda-1 || j <= tamBorda-1 || i >= nl-tamBorda || j >= nc-tamBorda) {
            m[i][j] = valorBorda;
           }
           else {
            m[i][j] = 0;
           }
        }
    }
    printf("P2\n%d %d\n255\n", nc, nl);
    int k, q;
    for (k = 0; k < nl; k++){
        for(q = 0; q < nc; q++){
            if (q == nc-1) {
                printf("%d", m[k][q]);
            }
            else {
                printf("%d ", m[k][q]);
            }
        }
        printf("\n");
    }
}