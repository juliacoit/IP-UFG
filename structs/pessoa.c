// definindo o tipo logico que pode assumir verdadeiro ou falso
typedef int logico;
#define TRUE 1
#define FALSE 0

typedef struct data {
    int dia, mes, ano;
} Date;

typedef struct pessoa {
    char nome[128];
    double peso;
    Date nasc;
} Pessoa;

int main(){
    Pessoa p1, p2;
    Date A, B;

}