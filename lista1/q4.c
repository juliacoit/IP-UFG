#include <stdio.h>

int main(){

int quantTemperaturas;
int i;
float F;
scanf("%d", &quantTemperaturas);
for (i = 0; i < quantTemperaturas; i++) {
    scanf("%f", &F);
    float celsius = (5*(F-32))/9;
    printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", F, celsius);
}

return 0;
}