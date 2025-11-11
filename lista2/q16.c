#include <stdio.h>
#define N 250

void subProdConj (int tamA, int tamB);

int main(){

int tamA, tamB;
do {
scanf(" %d", &tamA);
} while (tamA <= 0 || tamA > 100);
do {
scanf(" %d", &tamB);
} while (tamB <= 0 || tamB > 100);


subProdConj(tamA, tamB);

return 0;
}

void subProdConj (int tamA, int tamB) {
    int i, j;
    int ConjA[N], ConjB[N];
    
    for (i = 0; i < tamA; i++){
        int numeroNovo;
        int ehDupli;

        do {
            scanf("%d", &numeroNovo);
            ehDupli = 0;

            for (j = 0; j < i; j++) {
                if (numeroNovo == ConjA[j]){
                ehDupli = 1;
                }
            }
        } while (ehDupli == 1);

        ConjA[i] = numeroNovo;
    }

    for (i = 0; i < tamB; i++){
        int numeroNovo;
        int ehDupli;

        do {
            scanf("%d", &numeroNovo);
            ehDupli = 0;

            for (j = 0; j < i; j++) {
                if (numeroNovo == ConjB[j]){
                ehDupli = 1;
                }
            }
        } while (ehDupli == 1);

        ConjB[i] = numeroNovo;
    }

    int difConj[N];
    int tem, countDif = 0;

    for (i = 0; i < tamA; i++){
        tem = 0;
        for (j = 0; j < tamB; j++){
            if (ConjA[i] == ConjB[j]){
                // tem
                tem = 1;
                break;
        }
    }
    
    if (tem == 0) {
        difConj[countDif] = ConjA[i];
        countDif++;
    }
}

    printf("(");
    for (i = 0; i < tamA; i++){
        printf("%d", ConjA[i]);
        if (i < tamA-1){
            printf(",");
        }
    }
    printf(")\n");

    printf("(");
    for (i = 0; i < tamB; i++){
        printf("%d", ConjB[i]);
        if (i < tamB-1){
            printf(",");
        }
    }
    printf(")\n");

    printf("(");
    for (i = 0; i < countDif; i++){
        printf("%d", difConj[i]);
        if (i < countDif-1) {
                printf(",");
            }
    }

    printf(")\n");

    printf("(");
    for (i = 0; i < tamA; i++) {
        for (j = 0; j < tamB; j++){
            printf("(%dx%d)", ConjA[i], ConjB[j]);
            if (i < tamA-1 || j < tamB-1) {
                printf(",");
            }
        }
    }
    printf(")\n");
}