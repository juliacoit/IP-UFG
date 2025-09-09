#include <stdio.h>
#include <math.h>

int main(){

int n, i, resto;
int ehPrimo = 1;
scanf("%d", &n);

if (n > 1){
for (i = 2;i * i <= n; i++){
    resto = n % i;
    if (resto == 0) {
        // é divisivel
        ehPrimo = 0;
        break;
    }
}
    if (ehPrimo){
    printf("PRIMO");
    }
    else{
    printf("NAO PRIMO");
    }

} else if (n == 0 || n == 1){
    printf("NAO PRIMO");
}
else{
    printf("Numero invalido!");
}
return 0;
}