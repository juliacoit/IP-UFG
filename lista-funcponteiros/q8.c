#include <stdio.h>
#include <math.h>

/**
* Função que calcula a potencia de p mais próximo a n.
* @param n valor inteiro
* @param p valor da potencia
* @return retorna o valor da potencia mais proxima.
*/
int next_power( int n, int p );

int main(){

int n, p;
scanf("%d%d", &n, &p);
int pot = next_power(n, p);
printf("%d\n", pot);

return 0;
}

int next_power( int n, int p ){
    int i;
    int pot;
    for (i = 0; i <= n; i++){
        pot = pow(i, p);
        if (pot > n) {
            // aqui ele vai chegar no maior, depois devemos diminuir em 1 vez
            pot = pow(i-1, p);
            break;
        }
    }
    printf("%d -> %d^%d = ", n, i-1, p);
    return pot;
}