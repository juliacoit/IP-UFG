   /*
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
    */

#include <stdio.h>
     
    int main(){
     
    int inteiro;
    scanf("%d", &inteiro);
    if (inteiro < 0 || inteiro > 255){
        printf("Numero invalido!");
    }
    else {
        int resto1, resto2, resto3, resto4, resto5, resto6, resto7, resto8;
        
        resto1 = inteiro % 2;
        int divisao = inteiro/2;

        resto2 = divisao % 2;
        divisao = divisao/2;

        resto3 = divisao % 2;
        divisao = divisao/2;

        resto4 = divisao % 2;
        divisao = divisao/2;

        resto5 = divisao % 2;
        divisao = divisao/2;

        resto6 = divisao % 2;
        divisao = divisao/2;

        resto7 = divisao % 2;
        divisao = divisao/2;

        resto8 = divisao % 2;
        divisao = divisao/2;

        printf("%d%d%d%d%d%d%d%d", resto8, resto7, resto6, resto5, resto4, resto3, resto2, resto1);
     
    }
     
     
    return 0;
    }