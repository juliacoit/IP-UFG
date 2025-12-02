#include <stdio.h>
#include <stdlib.h>

typedef struct curso {
    int cod;
    float valorPorCred;
    char[100] nome;
} curso;

typedef struct aluno {
    char[500] nome;
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
    int n;
    scanf("%d", &n);

    curso * cursos = createCursos(n);
    readCursos(cursos, n);

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
        scanf(" %499[^\n]", alunos[i].nome);
        scanf(" %499[^\n]", alunos[i].nome);
    }
}

void freeAluno(aluno * alunos);