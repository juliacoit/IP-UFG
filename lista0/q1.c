#include <stdio.h>

int main() {
    float salariomin, quantkw;

    // printf("Insira o valor do salario minimo: ");
    scanf("%f", &salariomin);
    // printf("\nInsira a quantidade de kW gasta pela residencia: ");
    scanf("%f", &quantkw);

    float parteDoSalario = salariomin*0.7;
    float quant100kw = quantkw/100;

    float valorASerPago = quant100kw*parteDoSalario;
    float valorPorKw = valorASerPago/quantkw;
    float valorComDesconto = valorASerPago*0.9;

    printf("\nCusto por kW: R$ %.2lf\n", valorPorKw);
    printf("\nCusto do consumo: R$ %.2lf\n", valorASerPago);
    printf("\nCusto com desconto: R$ %.2lf\n", valorComDesconto);

    return 0;   
}