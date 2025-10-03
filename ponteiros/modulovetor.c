#include <stdio.h>
#include <math.h>

void levr2(double x[]);
double modulo (double x[]);
void printvr2(double * x);

int main(){

double a[2];
levr2(a);

printvr2(a);

double m = modulo(a);
printf("Modulo: %.2lf\n", m);
return 0;
}

void levr2(double x[]) {
    printf("Digite um par de coordenadas X e Y: ");
    scanf("%lf%lf", &x[0], &x[1]);
}

double modulo (double * x) {
    return sqrt(x[0]*x[0] + x[1]*x[1]);
}

void printvr2(double x[]) {
    printf("(%.1lf, %.1lf)\n", x[0], x[1]);
}