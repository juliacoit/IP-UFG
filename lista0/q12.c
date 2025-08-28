#include <stdio.h>
#include <math.h>

int main(){

double massaEmKg, aceleracao, tempoEmSegundos;
scanf("%lf", &massaEmKg);
scanf("%lf", &aceleracao);
scanf("%lf", &tempoEmSegundos);

double velocidade = aceleracao*tempoEmSegundos;
double velocidadeEmkm = velocidade*3.6;
double espacoPercorrido = (aceleracao*pow(tempoEmSegundos, 2))/2;
double trabalhoRealizado = ((massaEmKg*1000)*pow(velocidade, 2))/2;

printf("VELOCIDADE = %.2lf\n", velocidadeEmkm);
printf("ESPACO PERCORRIDO = %.2lf\n", espacoPercorrido);
printf("TRABALHO REALIZADO = %.2lf\n", trabalhoRealizado);



return 0;
}