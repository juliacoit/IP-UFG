#include <stdio.h>

void separaDigitos(int num, int *d1, int *d2, int *d3); // recebe enderecos de memoria como parametro

int main(){

int num;
scanf("%d", &num);

int digito1, digito2, digito3;
separaDigitos(num, &digito1, &digito2, &digito3); // criamos as variaveis na main e passamos seu endereco para a função alterar os valores
printf("%d%d%d", digito1, digito2, digito3);

return 0;
}

void separaDigitos(int num, int *d1, int *d2, int *d3){
    *d1 = num % 10;
    *d2 = (num/10) % 10;
    *d3 = num/100;
    // usando os ponteiros para alterar os valores no endereco recebido
}