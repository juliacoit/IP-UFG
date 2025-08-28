#include <stdio.h>

int main(){

int horas, minutos, segundos;
scanf("%d", &horas);
scanf("%d", &minutos);
scanf("%d", &segundos);

int horasPsegundos = horas*3600;
int minutosPsegundos = minutos*60;

int segundosTotal = horasPsegundos + minutosPsegundos + segundos;
printf("O TEMPO EM SEGUNDOS E = %d", segundosTotal);

return 0;
}