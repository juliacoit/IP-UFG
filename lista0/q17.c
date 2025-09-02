#include <stdio.h>
#include <math.h>

int main(){

int valor;
scanf("%d", &valor);
int resto;

int notasCem = valor/100;
resto = valor % 100;
int notasCinquenta = resto/50;
resto = resto%50;
int notasDez = resto/10;
resto = resto%10;
int moedasUm = resto;

printf("NOTAS DE 100 = %d\n", notasCem);
printf("NOTAS DE 50 = %d\n", notasCinquenta);
printf("NOTAS DE 10 = %d\n", notasDez);
printf("MOEDAS DE 1 = %d\n", moedasUm);


return 0;
}