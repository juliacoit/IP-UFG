#include <stdio.h>

int main(){

float entrada1, entrada2, entrada3;
float saida1, saida2, saida3;

scanf("%f", &entrada1);
scanf("%f", &entrada2);
scanf("%f", &entrada3);

if (entrada1 <= entrada2 && entrada1 <= entrada3){
    saida1 = entrada1;
    if (entrada2 <= entrada3){
        saida2 = entrada2;
        }
    else {
        saida2 = entrada3;
        saida3 = entrada2;
    }}
else if (entrada2 <= entrada1 && entrada2 <= entrada3){
    saida1 = entrada2;
    if (entrada1 <= entrada3){
        saida2 = entrada1;
        saida3 = entrada3;
    }
    else {
        saida2 = entrada3;
        saida3 = entrada1;
    }}
else {
    saida1 = entrada3;
    if (entrada2 <= entrada1) {
    saida3 = entrada1;
    saida2 = entrada2;
    }
    else {
        saida2 = entrada1;
        saida3 = entrada2;
    }
}

printf("%.2f, %.2f, %.2f", saida1, saida2, saida3);

return 0;
}