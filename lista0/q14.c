#include <stdio.h>

int main(){

float numero;
scanf("%f", &numero);
if (numero < 999 && numero > 0) {
    int alg1, alg2, alg3;

    alg1 = numero/100;
//  printf("%d\n", alg1);
    alg2= numero/10 - alg1*10;
//  printf("%d\n", alg2);
    alg3 = numero - alg1*100 - alg2*10;
//  printf("%d", alg3);

int controle = (alg1 + alg2*3 + alg3*5) % 7;
printf("O NOVO NUMERO E = %d%d%d%d", alg1, alg2, alg3, controle);
}
else{
    ("Erro.");
}

return 0;
}