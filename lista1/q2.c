#include <stdio.h>
#include <string.h>

int main(){

int n1, n2, n3;
scanf("%d", &n1);
scanf("%d", &n2);
scanf("%d", &n3);

if (n1 <= 9 && n1 >= 0 && n2 <= 9 && n2 >= 0 && n3 <= 9 && n3 >= 0) {

int centena, dezena, unidade;
centena = n1*100;
dezena = n2*10;
unidade = n3;

int numero = centena + dezena + unidade;
int quadrado = numero*numero;

printf("%d, %d", numero, quadrado);
}
else {
printf("DIGITO INVALIDO");
}


return 0;
}