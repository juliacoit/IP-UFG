#include <stdio.h>
#define NL 3
#define NC 2

void read_matrix(int A[][NC], int nl);
void print_matrix(int A[][NC], int nl);

int main(){
    int A[NL][NC];
    
    read_matrix(A,NL);
    print_matrix(A, NL);

    return 0;
    
}

void read_matrix(int A[][NC], int nl){
    int l, c;

    for (l=0; l<NL; l++){
        printf("Lendo a linha %d: ", l);
        for(c=0; c<NC; c++){
            scanf("%d", &A[l][c]);
        }
        printf("\n");
    }
}
void print_matrix(int A[][NC], int nl){
    int l, c;

    for (l=0; l<NL; l++){
        for(c=0; c<NC; c++){
            printf("%d ", A[l][c]);
        }
        printf("\n");
    }
    printf("\n");
}
