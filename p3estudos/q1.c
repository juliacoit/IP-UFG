#include <stdio.h>
#include <stdlib.h>

#define SALARIOMIN 1200

typedef struct {
int matricula;
int idade;
int numFilhos;
char sexo;
double salario;
} FUNCIONARIO;

FUNCIONARIO * createFuncionarios(int n);
void readFunc(FUNCIONARIO *funcionarios, int n);
int resposta1(FUNCIONARIO *funcionarios, int n);
int resposta2(FUNCIONARIO *funcionarios, int n);
int resposta3(FUNCIONARIO *funcionarios, int n);
int resposta4(FUNCIONARIO *funcionarios, int n);

int main() {
    int n;
    scanf("%d", &n);

    FUNCIONARIO * funcionarios = createFuncionarios(n);
    readFunc(funcionarios, n);
    int r1, r2, r3, r4;

    r1 = resposta1(funcionarios, n);
    r2 = resposta2(funcionarios, n);
    r3 = resposta3(funcionarios, n);
    r4 = resposta4(funcionarios, n);

    printf("%d %d %d %d\n", r1, r2, r3, r4);


}

FUNCIONARIO * createFuncionarios(int n){
    FUNCIONARIO * funcionarios = (FUNCIONARIO *)malloc(sizeof(FUNCIONARIO)*n);

    return funcionarios;
}

void readFunc(FUNCIONARIO *funcionarios, int n){
    int i;
    for (i = 0; i < n; i++){
        scanf("%d", &funcionarios[i].matricula);
        scanf(" %d", &funcionarios[i].idade);
        scanf(" %d", &funcionarios[i].numFilhos);
        scanf(" %c", &funcionarios[i].sexo);
        scanf(" %lf", &funcionarios[i].salario);
    }
}

int resposta1(FUNCIONARIO *funcionarios, int n){
    int i;
    int somaIdades = 0, cont = 0, salarioSuperior = 0;
    float mediaIdades;
    for (i = 0; i < n; i++){
        somaIdades = funcionarios[i].idade + somaIdades;
    }
    mediaIdades = somaIdades/n;

    for (i = 0; i < n; i++){
        if (funcionarios[i].idade > mediaIdades){
            if (funcionarios[i].salario > SALARIOMIN*3) cont++;
        }
    }
    return cont;
}

int resposta2(FUNCIONARIO *funcionarios, int n){
    int i, cont = 0;
    int totalFilhos = 0;
    for (i = 0; i < n; i++){
        totalFilhos = funcionarios[i].numFilhos + totalFilhos;
    }
    float mediaFilhos = totalFilhos/n;
    for (i = 0; i < n; i++){
        if (funcionarios[i].sexo == 'F') {
            if (funcionarios[i].numFilhos > mediaFilhos){
                cont++;
            }
        }
    }
    return cont;
}

int resposta3(FUNCIONARIO *funcionarios, int n){
    int i, cont = 0;
    int totalFilhos = 0;
    for (i = 0; i < n; i++){
        totalFilhos = funcionarios[i].numFilhos + totalFilhos;
    }
    float mediaFilhos = totalFilhos/n;
    for (i = 0; i < n; i++){
        if (funcionarios[i].sexo == 'M') {
            if (funcionarios[i].numFilhos > mediaFilhos){
                cont++;
            }
        }
    }
    return cont;
}

int resposta4(FUNCIONARIO *funcionarios, int n){
    int i, cont = 0;
    for (i = 0; i < n; i++){
            if (funcionarios[i].idade > 47){
                if (funcionarios[i].salario/funcionarios[i].numFilhos+2 < SALARIOMIN*2){
                    cont++;
                }
            }
    }
    return cont;
}