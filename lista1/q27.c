#include <stdio.h>

int main(){

int n, i;
int soma = 0;

scanf("%d", &n);
for (i = 1; i < n; i++) {
    int resto = n % i;
    if (resto == 0) {
        // i é um divisor
        soma += i;
        if (soma == i) {
                printf("%d = %d", n, i);  // primeiro divisor
            } else {
                printf(" + %d", i);
            }
    }
}
printf(" = %d ", soma);
if (soma == n) {
    //perfeito
    printf("(NUMERO PERFEITO)");
}
else {
    //imperfeito
    printf("(NUMERO NAO E PERFEITO)");
}

return 0;
}