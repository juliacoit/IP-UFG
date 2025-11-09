#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 500

void espelhar(int first, int last);

int main(){

int vezes;
scanf("%d", &vezes);
int x = 0;
while (x < vezes) {
    int first, last;
    scanf("%d%d", &first, &last);

    espelhar(first, last);
    x++;
}

return 0;
}

void espelhar(int first, int last){
    int primeiraParte[N];
    int segundaParte[N];
    int tam = abs(last-first) + 1;

    int i, j;
    for (i = 0; i < tam; i++){
        primeiraParte[i] = first+i;
    }
    for (i = 0; i < tam; i++){
        int digito, invertido = 0;
        int num = primeiraParte[(tam-1)-i];
        while (num > 0) {
            digito = num % 10; // sempre tira o ultimo dig

            invertido = invertido * 10 + digito;
            num = num/10;
        }
        

        segundaParte[i] = invertido;
    }

    for (i = 0; i < tam; i++) {
        printf("%d", primeiraParte[i]);
    }
    for (i = 0; i < tam; i++) {
        printf("%d", segundaParte[i]);
    }
}