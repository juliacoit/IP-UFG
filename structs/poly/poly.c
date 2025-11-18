#include "poly.h"

Poly polyRead(void){
    Poly p;
    int i;
    scanf("%d", &(p.ordem));

    if (p.ordem > MAX){
        printf("ordem nao suportada\n");
        exit(0);
    }

    for (i = 0; i<p.ordem; i++){
        scanf("%lf", p.coef[i]);
    }
}
void polyPrint(Poly p){
    int i;
    for (i=0; i <= p.ordem; i++){
        printf("%.1lfx^%d", p.coef[i], i);
    }
}

Poly polySum(Poly A, Poly B){
    Poly S;
    int i;
    for(i=0; i < A.ordem && i < B.ordem; i++){
        S.coef[i] = A.coef[i] + B.coef[i];
    }

    if (A.ordem > B.ordem) {
        S.ordem = A.ordem;
        for (; i <= A.ordem; i++){
            S.coef[i] = A.coef[i];
        }
    } else {
        S.ordem = B.ordem;
        for (; i <= B.ordem; i++){
            S.coef[i] = B.coef[i];
        }
    }
}
Poly polySub(Poly A, Poly B); // retorna a-b