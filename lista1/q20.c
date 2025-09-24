#include <stdio.h>

int main(){

int n, i, coluna, linha, soma = 0;
scanf("%d", &n);
int primeiraCasa = n;
int graosAtual = n;

for (linha = 1; linha <= 8; linha++){
    for (coluna = 1; coluna <= 8; coluna++){
        if (!(linha == 1 && coluna == 1)) {
            // a primeira casa nao soma nada, recebe apenas n
            if ((linha + coluna)%2==1) {
                // se isso acontecer, a casa é preta
                graosAtual = n * 2;
            }
            else {
                // casa branca
                graosAtual = n;
            }
            soma += graosAtual;
            //printf("casa %d : %d = %d\n", linha, coluna, soma);
    }
    }
}printf("%d", soma);

return 0;
}