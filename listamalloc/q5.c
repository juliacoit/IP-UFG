#include <stdio.h>
#include <stdlib.h>

typedef struct curso {
    int cod;
    float valorPorCred;
    char nome[100];
} curso;

typedef struct aluno {
    char nome[500];
    int codcurso;
    int numCred;
} aluno;

curso * createCursos (int n);
void readCursos (curso * cursos, int n);
void freeCursos(curso * cursos);

aluno * createAluno (int m);
void readAluno (aluno * alunos, int m);
void freeAluno(aluno * alunos);

int main (){
    int n, m;
    scanf("%d", &n);

    curso * cursos = createCursos(n);
    readCursos(cursos, n);

    scanf("%d", &m);
    aluno * alunos = createAluno(m);
    readAluno(alunos, m);

    int i, j;
    for (i = 0; i < m; i++){

        int codigo = alunos[i].codcurso;
        for (j = 0; j < n; j++){
            if (cursos[j].cod == codigo) {
                float valorApagar = alunos[i].numCred * cursos[j].valorPorCred;
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", alunos[i].nome, cursos[j].nome, alunos[i].numCred, cursos[j].valorPorCred, valorApagar);
                break;
            }
        }
      //  printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", alunos[i].nome, cursos[i].nome, alunos[i].numCred, cursos[i].valorPorCred, valorApagar);
    }
    freeCursos(cursos);
    freeAluno(alunos);
    return 0;

}

curso * createCursos (int n){
    curso * c = (curso *)malloc(n * sizeof(curso));
    
    return c;
}
void readCursos (curso * cursos, int n){
    int i;
    for (i = 0; i < n; i++){
        scanf("%d", &cursos[i].cod);
        scanf("%f", &cursos[i].valorPorCred);
        scanf(" %99[^\n]", cursos[i].nome);
    }
}

void freeCursos(curso * cursos){
    free(cursos);
}

aluno * createAluno (int m){
    aluno * a = (aluno *)malloc(m * sizeof(aluno));

    return a;
}

void readAluno (aluno * alunos, int m){
    int i;
    for (i = 0; i < m; i++){
        scanf(" %499[^\n]", alunos[i].nome);
        scanf("%d", &alunos[i].codcurso);
        scanf("%d", &alunos[i].numCred);
    }
}

void freeAluno(aluno * alunos){
    free(alunos);
}