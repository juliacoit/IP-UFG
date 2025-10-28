#include <stdio.h>
#define N 10000

/**
* Função que calcula o valor de pi usando a série proposta por John Wallis
* @param n quantidade de termos da série
* @return o valor aproximado da constante pi
*/
double compute_pi( int n );

int main(){

int n;
scanf("%d", &n);

double pi = compute_pi(n);
printf("%.12lf", pi);

return 0;
}

double compute_pi( int n ){
    int i;
    double denominador[N];
    double numerador[N];
    double pi;

    denominador[0] = 1;
    numerador[0] = 2;

    for (i = 0; i < n; i++){
        if (i > 0) {
            if (i % 2 == 1) {
                denominador[i] = denominador[i-1] + 2;
                numerador[i] = numerador[i-1];
            }
            if (i % 2 == 0) {
                numerador[i] = numerador[i-1] + 2;
                denominador[i] = denominador[i-1];
            }
        }
    }
    pi = 1.0;
    for (i = 0; i < n; i++){
        // printf("frac: %lf / %lf\n", numerador[i], denominador[i]);
        pi = pi*(numerador[i]/denominador[i]);
    }
    return pi*2.0;
}