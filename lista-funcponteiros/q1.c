#include <stdio.h>

/**
* Funcao que calcula o fatorial de um numero n
* @param n um numero inteiro positivo
* @return o fatorial de n
*/
unsigned long int fat( unsigned int n);

int main(){

int n;
scanf("%d", &n);

int fatorial = fat(n);

printf("%d! = %d", n, fatorial);

return 0;
}

unsigned long int fat( unsigned int n){
    int f = 1;
    int i;
    if (n == 0) {
        return 1;
    }
    for (i = n-1; i>=0; i--){
        f = (n-i)*f;
    }
    return f;
}