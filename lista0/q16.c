#include <stdio.h>

int main(){

int numero;
scanf("%d", &numero);
if (numero < 999 && numero > 0 && numero % 10 != 0 && numero % 100 != 0) {
    int alg1, alg2, alg3;

    alg1 = numero/100;
//  printf("%d\n", alg1);
    alg2= numero/10 - alg1*10;
//  printf("%d\n", alg2);
    alg3 = numero - alg1*100 - alg2*10;
//  printf("%d", alg3);

printf("%d%d%d\n", alg3, alg2, alg1);
}

else{
    ("Erro.");
}

return 0;
}