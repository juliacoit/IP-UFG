#include <stdio.h>

int main(){

float precoFabrica;
float percentualDistribuidor;
float percentualImpostos;


scanf("%f", &precoFabrica);
scanf("%f", &percentualDistribuidor);
scanf("%f", &percentualImpostos);

float taxaDistribuidor = (percentualDistribuidor/100)*precoFabrica;
float taxaImpostos = (percentualImpostos/100)*precoFabrica;

float custoConsumidor = precoFabrica + taxaDistribuidor + taxaImpostos;

printf("O VALOR DO CARRO E = %.2f\n", custoConsumidor);

return 0;
}