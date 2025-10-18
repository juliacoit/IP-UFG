#include <stdio.h>
#include <math.h>

void levr2(double x[]);
double modulo (double x[]);
void printvr2(double * x);
double angulovr2(double * x);
double pscalarvr2( double * a, double * b);
void projvr2(double * a, double * b, double * p);

int main(){

double a[2];
double b[2];
double p[2];

levr2(a);
levr2(b);

printvr2(a);
printvr2(b);

printf("Modulo de A: %.2lf\n", modulo(a));
printf("Modulo de B: %.2lf\n", modulo(b));
printf("Angulo de A:  %.2lf\n", angulovr2(a));
printf("Angulo de B:  %.2lf\n\n", angulovr2(b));

printf("Produto escalar <A, B>> %.2lf\n", pscalarvr2(a, b));
projvr2(a, b, p);
printf("Projecao: ");
printvr2(p);
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

double angulovr2(double * x) {
    return atan(x[1]/x[0])*180/M_PI;
}

double pscalarvr2( double * a, double * b) {
    return a[0]*a[0] + a[1]*a[1];
}

void projvr2(double * a, double * b, double * p) {
    double m = modulo(b);
    double k = pscalarvr2(a, b)/m*m;
    p[0] = k*b[0];
    p[1] = k*b[1];
}