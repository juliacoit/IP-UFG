#include <stdio.h>

int main() {
    float salariomin, quantkw;

    scanf("Insira o valor do salario minimo: %f\n", &salariomin);
    scanf("Insira a quantidade de kW gasta pela residencia: %f\n", &quantkw);

    float parteDoSalario = salariomin*0.7;
    float quant100kw = quantkw/100;

    float valorASerPago = quant100kw*parteDoSalario;
    float valorPorKw = valorASerPago/quantkw;
    float valorComDesconto = valorASerPago*0.9;

    printf("Custo por kW: R$ %f\n", valorPorKw);
    printf("Custo do consumo: R$ %f\n", valorASerPago);
    printf("Custo com desconto: R$ %f\n", valorComDesconto);
    
}