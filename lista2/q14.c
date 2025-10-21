#include <stdio.h>
#include <string.h>
#define N 505

int procuraChar(char caracter, char s[]);

int main(){

int loop, k;
scanf("%d", &loop);

for (k = 0; k < loop; k++){
    char caracter, texto[N], separador;

    getchar();
    scanf("%c", &caracter);
    scanf("%c", &separador);
    scanf("%[^\n]", texto); 

    int index;
    index = procuraChar(caracter, texto);
    if (index == -1) {
        printf("Caractere %c nao encontrado.\n", caracter); // PROBLEMA AQUI
    }
    else {
        printf("Caractere %c encontrado no indice %d da string.\n", caracter, index); // E AQUI
    }


}
return 0;
}

int procuraChar(char caracter, char s[]){
    int tam = strlen(s);
    int i, index = -1;
    for (i = 0; i < tam; i++){
        if (s[i] == caracter) {
            index = i;
            return index;
        }
    }
    return index;
}