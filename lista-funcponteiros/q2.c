#include <stdio.h>
#define N 1000
/**
* Retorna o n-ésimo termo da sequência de Fibonacci
* @param t1 primeiro termo da sequência
* @param t2 segundo termo da sequência
* @param n a posição do termo desejado da sequência
* @return o valor do n-ésimo termo da sequência
*/
unsigned long long fibonacci( int t1, int t2, int n);

int main(){

int t1, t2, n;
scanf("%d%d%d", &t1, &t2, &n);
unsigned long long saida = fibonacci(t1, t2, n);
printf("%d", saida);

return 0;
}

unsigned long long fibonacci( int t1, int t2, int n){
    int i;
    unsigned long long seq[N];
    seq[0] = t1;
    seq[1] = t2;

    for (i = 2; i < n; i++){
        seq[i] = seq[i-2] + seq[i-1];
    }
    return seq[n-1];
}