#include <stdio.h>

int main(){

int matriz[2][2];
float matrizQuad[2][2];

scanf("%d%d%d%d", &matriz[0][0], &matriz[0][1], &matriz[1][0], &matriz[1][1]);

matrizQuad[0][0] = matriz[0][0]*matriz[0][0] + matriz[0][1]*matriz[1][0];
matrizQuad[0][1] = matriz[0][1]*matriz[0][1];
matrizQuad[1][0] = matriz[1][0]*matriz[1][0];
matrizQuad[1][1] = matriz[1][1]*matriz[1][1];
// poderia ter feito um loop for mas como eh uma matriz pequena fiz na mao mesmo
printf("%.3f %.3f\n%.3f %.3f", matrizQuad[0][0], matrizQuad[0][1], matrizQuad[1][0], matrizQuad[1][1]);
return 0;
}