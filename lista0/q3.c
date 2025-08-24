#include <stdio.h>

#define PI 3.14159

int main(){
float raio, altura;
scanf("%f", &raio);
scanf("%f", &altura);

float areaDoCirculo = PI*raio*raio;
float areaLateral = 2*PI*raio*altura;

float areaTotal = 2*areaDoCirculo + areaLateral;
float valorDeCusto = areaTotal*100;

printf("O VALOR DE CUSTO E = %.2lf\n", valorDeCusto);

return 0;
}