#include <stdio.h>
#define N 1000

void lerAlunos(int * alunos, int quantAlunos);
void aulaCancelada(int * alunos, int quantAlunos, int minAlunos);

int main(){

int quantAlunos, minAlunos, alunos[N];
scanf("%d%d", &quantAlunos, &minAlunos);
lerAlunos(alunos, quantAlunos);
aulaCancelada(alunos, quantAlunos, minAlunos);

return 0;
}

void lerAlunos(int * alunos, int quantAlunos){
    int i;
    for (i = 0; i < quantAlunos; i++){
        scanf("%d", &alunos[i]);
    }
}

void aulaCancelada(int * alunos, int quantAlunos, int minAlunos){
    int i;
    int naHora = 0, ultimoAtrasado;
    int presentes[N];
    for (i = 0; i < quantAlunos; i++){
        if (alunos[i] <= 0) {
            naHora++;
            ultimoAtrasado = i+1;
        }
    }
    for (i = 0; i < ultimoAtrasado; i++){
        if (alunos[i] <= 0) {
            presentes[i] = i+1;
        }
    }
    if (naHora < minAlunos){
        printf("SIM\n");
        return;
    }
    else {
        printf("NAO\n");
        for (i = ultimoAtrasado-1; i >= 0; i--){
            if (presentes[i] != 0) printf("%d\n", presentes[i]);
        }
    }
}