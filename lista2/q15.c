#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 12221

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
    int digitosOrig[N];

    int tam = abs(last-first) + 1;

    int i, j;
    for (i = 0; i < tam; i++){
        primeiraParte[i] = first+i;
    }
    for (i = 0; i < tam; i++){
        int digito, invertido = 0;
        int num = primeiraParte[(tam-1)-i];
        int numTemp = num;
        int contagemDig = 0;

        if (numTemp == 0) {
            contagemDig = 1;
        }
        else {
            while (numTemp > 0) {
                numTemp = numTemp / 10;
                contagemDig++;
            }
        }

        digitosOrig[i] = contagemDig;

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

        printf("%0*d", digitosOrig[i], segundaParte[i]);
        if (i == tam-1) {
            printf("\n");
        }
    }
}