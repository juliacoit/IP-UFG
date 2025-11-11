#include <stdio.h>
#include <stdlib.h>
#define P 50

float idaMercado (int quantDisp);

int main () {
    int testes, x = 0;
    scanf("%d", &testes);

    while (x < testes)
    {
        int quantDisp;
        scanf("%d", &quantDisp);

        int totalPay = idaMercado(quantDisp);
        printf("R$ %.2f", totalPay);
        x++;
    }
    
    return 0;
}

float idaMercado (int quantDisp){
    int i, j;
    char ** characName = (char **)malloc(quantDisp * sizeof(char));
    for (i = 0; i < quantDisp; i++){
        characName[i] = (char *)malloc(sizeof(char)*P);
    }

    float * itemPreco = malloc(quantDisp * sizeof(float));

    for (i= 0; i<quantDisp; i++){
        scanf("%c", &characName[i]);
        scanf("%f", &itemPreco[i]);
    }

    int buyQuant;
    scanf("%d", &buyQuant);

    char ** buyName = (char **)malloc(buyQuant * sizeof(char));

    for (i = 0; i < buyQuant; i++){
        buyName[i] = (char *)malloc(sizeof(char)*P);
    }

    int * itemQuant = malloc(buyQuant * sizeof(float));

    for (i= 0; i<buyQuant; i++){
        scanf("%c", &buyName[i]);
        scanf("%f", &itemQuant[i]);
    }

    float totalPay = 0;
    // agora vou fazer um for dentro de for onde o i representa a lista principal, e j a de compras
    for (i = 0; i < quantDisp; i++){
        for (j = 0; j < buyQuant; j++)
        if (characName[i] == buyName[j]){
            totalPay = itemPreco[j]*itemQuant[j];
        }
    }
    for (i = 0; i < quantDisp; i++){
        free(characName[i]);
    }
    free(characName);
    free(itemPreco);

    for (i = 0; i < buyQuant; i++){
        free(buyName[i]);
    }
    free(buyName);
    free(itemQuant);

    return totalPay;
}