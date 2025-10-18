#include <stdio.h>

int str_finds(char const * A, char const * B);


int main() {

    char A[32], B[32];
    scanf("%[^\n]", A);
    getchar();
    scanf("%[^\n]", B);
    getchar();

    int resultado = str_finds(A, B);
    printf("%d", resultado);

    return 0;
}

/*
int str_cmp(char const * A, char const * B){
    int i = 0;
    while(A[i] == B[i] && A[i]!='\0' && B[i]!='\0') i++;
    return A[i] - B[i];
}
    */
int str_finds(char const * A, char const * B){
    int i = 0, k;
    while (A[i] != '\0'){
        k=0;
        while(A[i+k] == B[k] && A[i+k] != '\0' && B[k] != '\0') {
            k++;
        }
        if (B[k] == '\0') {
            return i;
        };
        i++;
    }
    return -1;
}