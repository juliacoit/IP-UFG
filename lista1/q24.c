#include <stdio.h>

int main(){

int n1, n2, n3;

scanf("%d%d%d", &n1, &n2, &n3);
int num1 = n1, num2 = n2, num3 = n3;

// printf("%d", maior);

int divisor = 2;
int mmc = 1;

while (num1 > 1 || num2 > 1 || num3 > 1) {
    if (num1 % divisor == 0 || num2 % divisor == 0 || num3 % divisor == 0) {
        printf("%d %d %d", num1, num2, num3);
        if (num1 % divisor == 0) {
            num1 = num1/divisor;
        }
        if (num2 % divisor == 0) {
            num2 = num2/divisor;
        }
        if (num3 % divisor == 0) {
            num3 = num3/divisor;
        }
        mmc = divisor*mmc;
        printf(" :%d\n", divisor);
    }
    else {
        divisor++; // tenta o prox
    }
}
printf("MMC: %d", mmc);
return 0;
}