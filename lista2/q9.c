#include <stdio.h>
#include <string.h>

#define MAX 100

int main(){

int testes, i;
scanf("%d", &testes);

for (i = 0; i < testes; i++){
    char mensagem[MAX], mensagem_criptografada[MAX];
    scanf(" %[^\n]", mensagem);

    int mensagem_ascii[MAX], k, tamanho = strlen(mensagem);

    for (k = 0; k < tamanho; k++) {
        mensagem_ascii[k] = mensagem[k];
        if (mensagem_ascii[k] >= 65 && mensagem_ascii[k] <= 90 || mensagem_ascii[k] >= 97 && mensagem_ascii[k] <= 122) {
        mensagem_ascii[k] = mensagem_ascii[k] + 3;
        }
    }
    // agora vamos inverter
    int j, q, temp;
    for (j = 0, q = tamanho - 1; j < q; j++, q--) {
        temp = mensagem_ascii[j];
        mensagem_ascii[j] = mensagem_ascii[q];
        mensagem_ascii[q] = temp;
        }
    // terceira parte agora
    int a;
    for (a = tamanho/2; a < tamanho; a++) {
        mensagem_ascii[a] = mensagem_ascii[a] - 1;
    }
    int forCripto;
    for (forCripto = 0; forCripto < tamanho; forCripto++) {
        mensagem_criptografada[forCripto] = mensagem_ascii[forCripto];
    }

    mensagem_criptografada[tamanho] = '\0'; 
    printf("%s\n", mensagem_criptografada);

}

return 0;
}