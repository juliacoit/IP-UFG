#include <stdio.h>

struct data
{
    int dia, mes, ano;
};

void dataPrint(struct data D){
    printf("%d/%d/%d\n", D.dia, D.mes, D.ano);
}

int main(){

    struct data prova;

    prova.dia = 2;
    prova.mes = 12;
    prova.ano = 2025;

    dataPrint(prova);

    return 0;
}
