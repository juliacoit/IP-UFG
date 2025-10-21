#include <stdio.h>

int main(){

int matriz[2][2];

scanf("%d%d%d%d", &matriz[0][0], &matriz[0][1], &matriz[1][0], &matriz[1][1]);

float determinante = (matriz[0][0]*matriz[1][1])-(matriz[0][1]*matriz[1][0]);
printf("%.2f", determinante);

return 0;
}