#include <stdio.h>

#define PI 3.14159

int main(){

float a, b, c;

scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);

float delta = (b*b) - 4*a*c;
printf("O VALOR DE DELTA E = %.2lf\n", delta);

return 0;
}