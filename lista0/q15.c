#include <stdio.h>

int main(){

int inteiro;
scanf("%d", &inteiro);
if (inteiro < 0 || inteiro > 255){
    printf("Número Inválido!");
}
else {
    int resto[7];
    int i;
    for (i = 0; i < 8; i++){
    resto[i] = inteiro % 2;
    int divisao = inteiro/2;
    inteiro = divisao;
    }
    for (i = 7; i >= 0; i--){
    printf("%d", resto[i]);
    }

}


return 0;
}