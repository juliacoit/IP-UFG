#include <stdio.h>
#include <math.h>

int main(){

float lado1;
float lado2;
float lado3;

scanf("%f", &lado1);
scanf("%f", &lado2);
scanf("%f", &lado3);

float t = (lado1 + lado2 + lado3)/2;

// printf("valor de T %f", t);

float area = sqrt(t*(t-lado1)*(t-lado2)*(t-lado3));
printf("A AREA DO TRIANGULO E = %.2f\n", area);

return 0;
}