#include <stdio.h>

int main(){

float matriz[2][2];
float matrizQuad[2][2];

scanf("%f%f%f%f", &matriz[0][0], &matriz[0][1], &matriz[1][0], &matriz[1][1]);

float a = matriz[0][0];
float b = matriz[0][1];
float c = matriz[1][0];
float d = matriz[1][1];

matrizQuad[0][0] = (a*a)+(b*c);
matrizQuad[0][1] = (a*b)+(b*d);
matrizQuad[1][0] = (c*a)+(d*c);
matrizQuad[1][1] = (c*b)+(d*d);

printf("%.3f %.3f\n%.3f %.3f", matrizQuad[0][0], matrizQuad[0][1], matrizQuad[1][0], matrizQuad[1][1]);
return 0;
}