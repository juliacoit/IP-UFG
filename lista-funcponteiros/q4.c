#include <stdio.h>

int somaDivisores(int n);

int main(){

int num;
scanf("%d", &num);
printf("%d = ", num);
somaDivisores(num);

return 0;
}

int somaDivisores(int n){
    int i;
    int soma = 0;
    int flag = 0;
    for (i = 1; i < n; i++){
        if (n % i == 0) {
            // eh um divisor
            soma = soma + i;
            if (flag == 0) {
                printf("%d", i);
            }
            else {
                printf(" + %d", i);
            }
            flag = 1;
        }
    }
    printf(" = %d", soma);
    if (soma == n) {
        printf(" (NUMERO PERFEITO)\n");
    }
    else {
        printf(" (NUMERO NAO E PERFEITO)\n");
    }
}