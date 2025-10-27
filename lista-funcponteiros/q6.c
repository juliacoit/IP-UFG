#include <stdio.h>
#define N 102

/**
* Função que calcula a raiz quadrada de n.
* @param n um numero real qualquer
* @param p precisão do cálculos
* @return a raiz quadrada de n
*/
double raiz( double n, double p );

/**
* Valor absoluto de um numero qualquer
* @param n um número real qualquer
* @return o valor absoluto de n
*/

double absoluto( double n );

int main(){

double n, e;
scanf("%lf%lf", &n, &e);

double raizAprox = raiz(n, e);

return 0;
}

double absoluto( double n ){
    if (n >= 0) {
        return n;
    }
    else {
        return n * (-1);
    }
}

double raiz( double n, double p ){
    double r[N];
    int k=0;
    r[k] = 1;
    double erro = absoluto(n - (r[k]*r[k])); // erro
    while (erro > p) {
        k = k+1;
        r[k] = (r[k-1] + (n/r[k-1]))/2;
        erro = absoluto(n - (r[k]*r[k]));
        printf("r: %.9lf, err: %.9lf\n", r[k], erro);
    }
    return r[k];
    
}