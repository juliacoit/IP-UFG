#include <stdio.h>
#include <math.h>
 
int main() {
    double valorDecimal;
    int numFracao, denFracao;
    int casasDecimais = 0, divisor = 2;
 
    scanf("%lf", &valorDecimal);
 
    while ((int)valorDecimal != valorDecimal) {
        valorDecimal *= 10;
        casasDecimais++;
    }
 
    denFracao = (int)pow(10, casasDecimais);
    numFracao = (int)valorDecimal;
 
    while(divisor < numFracao && divisor < denFracao){
        if (numFracao % divisor == 0 && denFracao % divisor == 0){
            numFracao /= divisor;
            denFracao /= divisor;
        } else {
            divisor++;
        }
    }
 
    printf("%d/%d\n", numFracao, denFracao);

    return 0;
}
