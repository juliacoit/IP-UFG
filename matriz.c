#include <stdio.h>
#define NL 3
#define NC 2

int main(){
    int A[NL][NC];
    int l, c;

    for (l=0; l<NL; l++){
        printf("Lendo a linha %d\n", l);
        for(c=0; c<NC; c++){
            scanf("%d", &A[l][c]);
        }
    }
    for (l=0; l<NL; l++){
        for(c=0; c<NC; c++){
            printf("%d ", A[l][c]);
        }
        printf("\n");
    }
    printf("\n");
}
