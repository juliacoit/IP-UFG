#include <stdio.h>

int main(){
float fahrenheit;
// usuario insere a temperatura em F
scanf("%f", &fahrenheit);
float polegadas;
// chuva em polegadas
scanf("%f", &polegadas);

float celsius = (5*(fahrenheit - 32))/9;
float chuvaEmMili = polegadas*25.4;

printf("O VALOR EM CELSIUS = %.2lf\n", celsius);
printf("A QUANTIDADE DE CHUVA E = %.2lf\n", chuvaEmMili);
return 0;
}