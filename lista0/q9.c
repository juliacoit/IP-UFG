#include <stdio.h>

int main(){

float numero;
scanf("%f", &numero);

printf("%.1f00000\n", numero);
printf("%.2f0000\n", numero);
printf("%.3f000\n", numero);

return 0;
}