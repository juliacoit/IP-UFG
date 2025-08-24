#include <stdio.h>

int main(){

float a, b, c, d;
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
scanf("%f", &d);

float determinante = (a*d) - (b*c);
printf("O VALOR DO DETERMINANTE E = %.2lf\n", determinante);

return 0;
}