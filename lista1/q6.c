#include <stdio.h>
#include <string.h>

int main(){

float nota;
scanf("%f", &nota);
char conceito;


if (nota >= 0 && nota < 6) {
    conceito = 'D';
}
if (nota >= 6 && nota < 7.5) {
    conceito = 'C';
}
if (nota >= 7.5 && nota < 9) {
    conceito = 'B';
}
if (nota >= 9 && nota < 10) {
    conceito = 'A';
}

printf("NOTA = %.1f CONCEITO = %c\n", nota, conceito);

return 0;
}