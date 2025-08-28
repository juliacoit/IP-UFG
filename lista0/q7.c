#include <stdio.h>
#include <math.h>

int main(){

float altura, aresta;
scanf("%f %f", &altura, &aresta);

float areaDaBase = (3*(aresta*aresta)*sqrt(3))/2;
float volume = (1.0/3.0)*(areaDaBase)*(altura);
printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volume);

return 0;
}