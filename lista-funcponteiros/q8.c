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
    int pot, dif1, dif2, potMaior, potMenor;
    for (i = 0; ;i++){
        pot = round(pow(i, p));
        if (pot > n) {
            potMaior = pot;
            potMenor = pow(i-1, p);
            dif1 = potMaior-n;
            dif2 = n-potMenor;
            if (dif1 < dif2) {
                pot = potMaior;
                printf("%d -> %d^%d = ", n, i, p);
            }
            else{
                pot = potMenor;
                printf("%d -> %d^%d = ", n, i-1, p);
            }
            break;
        }
    }
    return pot;
}