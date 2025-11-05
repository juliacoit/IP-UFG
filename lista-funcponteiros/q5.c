#include <stdio.h>
#include <math.h>

int raizesEq2Grau(float a, float b, float c);

int main(){

float a, b, c;
double delta, x1, x2;

scanf("%f%f%f", &a, &b, &c);
delta = (double)b*b - (4*a*c);
int tipoRaiz;
tipoRaiz = raizesEq2Grau(a, b, c);
switch (tipoRaiz)
{
case 1:
    printf("RAIZ UNICA\n");
    x1 = (-b + sqrt(delta))/(2.0*a);
    printf("X1 = %.2f\n", x1);
    break;
case 2:
    printf("RAIZES DISTINTAS\n");
    x1 = (-b + sqrt(delta))/(2.0*a);
    x2 = (-b - sqrt(delta))/(2.0*a);
    printf("X1 = %.2f\nX2 = %.2f\n", x1, x2);
    break;
case 0:
    printf("RAIZES IMAGINARIAS\n");
    break;

default:
    break;
}

return 0;
}

int raizesEq2Grau(float a, float b, float c){
    // delta = b^2 -4ac
    float delta = (double)b*b - (4*a*c);
    if (delta > 0) {
        return 2;
    }
    else if (delta < 0) {
        return 0;
    }
    else {
        return 1;
    }
}