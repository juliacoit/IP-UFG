#include <stdio.h>
#include <string.h>

int main(){

int testes, i, j;
scanf("%d", &testes);
getchar();
int quantVogais = 0;
int quantConsoantes = 0;
int quantLetras = 0;

for (i = 0; i < testes; i++) {

char frase[10000];
fgets(frase, 100, stdin); // função que armazena string com espaço
frase[strcspn(frase, "\n")] = '\0'; // função que remove a quebra de linha da frase

int v, c;
char vogais[] = "aeiouAEIOU";
char consoantes[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

for (j = 0; j < strlen(frase); j++){
    for (v = 0; v < strlen(vogais); v++){
        if (frase[j] == vogais[v]) {
            quantVogais++;
            quantLetras++;
        }
    }
    for (c = 0; c < strlen(consoantes); c++){
        if (frase[j] == consoantes[c]) {
            quantConsoantes++;
            quantLetras++;
        }
    }
}
printf("Letras = %d\n", quantLetras);
printf("Vogais = %d\n", quantVogais);
printf("Consoantes = %d\n", quantConsoantes);
quantVogais = 0;
quantConsoantes = 0;
quantLetras = 0;
 
}

return 0;
}