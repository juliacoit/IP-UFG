#include <stdio.h>

int main(){

int n, valor, i, quantPar = 0;
scanf("%d", &n);
int v[n];

if (n >= 1 && n <= 1000){
    for (i = 0; i < n; i++) {
    scanf("%d", &valor);
    v[i] = valor;
    if (v[i] % 2 == 0) {
        printf("%d ", v[i]);
        quantPar++;
    }
}
printf("%d\n", quantPar);
}

return 0;
}