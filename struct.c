// structs in C class, introduction and explanation

struct data {
  int dia;
  int mes;
  int ano;
};

// essa estrutura ocupa 12 bytes, pois cada inteiro ocupa 4 bytes.

struct pessoa {
  char nome[128];
  double peso;
  struct data nasc;
}

/*
Uma struct descreve e define um novo tipo de dado. Cada variável declarada assume a estrutura de dados.
o ponto '.' permite acesso às variáves internas à estrutura.
*/
struct data niver;
niver.dia = 29;
scanf("%d", &(niver.mes));
// struct pessoa e struct data são tipos de dados heterogeneos definidos pelo desenvolvedor.

