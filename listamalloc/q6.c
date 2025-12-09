#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    int matricula;
    int diaNasc;
    int mesNasc;
    int anoNasc;
    char nome[200];
} aluno;

aluno * createAluno (int m);
void readAluno (aluno * alunos, int m);
void freeAluno(aluno * alunos);
int ComparaDataNasc(aluno * alunos1, aluno * alunos2);

int main() {
    int m, i;
    scanf("%d", &m);

    aluno * alunos = createAluno(m);
    readAluno(alunos, m);
    aluno * alunosOrdered = createAluno(m);

    for (i = 1; i < m; i++){
        aluno1 = alunos[i-1];
        aluno2 = alunos[i];

        
    }
}

aluno * createAluno (int m){
    aluno * a = (aluno *)malloc(m * sizeof(aluno));

    return a;
}
void readAluno (aluno * alunos, int m){
    int i;
    for (i = 0; i < m; i++){
        scanf("%d", &alunos[i].matricula);
        scanf("%d", &alunos[i].diaNasc);
        scanf("%d", &alunos[i].mesNasc);
        scanf("%d", &alunos[i].anoNasc);
        scanf(" %499[^\n]", alunos[i].nome);
    }
void freeAluno(aluno * alunos){
    free(alunos);
}

int ComparaDataNasc(aluno * alunos1, aluno * alunos2){
    int idade1 = 2025 - alunos1.anoNasc;
    int idade2 = 2025 - alunos2.anoNasc;

    if (idade1 == idade2) {
        if (alunos1.mesNasc > alunos2.mesNasc)
        return 1;
        else if (alunos1.mesNasc == alunos2.mesNasc) {
            if (alunos1.diaNasc > alunos2.diaNasc){
                return 1;
            }
            else return 0;
        }
        else return 0;
    }
    else {
        if (idade1 < idade2){
            return 1;
        }
        else return 0;
    }
}