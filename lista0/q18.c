#include <stdio.h>
#include <math.h>

int main(){

float a, b, c, d, e, f;
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
scanf("%f", &d);
scanf("%f", &e);
scanf("%f", &f);

float x, y;

y = (a*f - d*c)/ (-b*d + e*a);
x = (c-b*y)/a;

printf("O VALOR DE X E = %.2f\n", x);
printf("O VALOR DE Y E = %.2f\n", y);

return 0;
}