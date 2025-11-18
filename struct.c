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

int main (){
  struct pessoa p1, p2;

  p1.peso = 70;
  strcpy(p1.nome, "joao");
  /*
  oq o strcopy faz:
  p1.nome[0] = 'j';
  p1.nome[1] = 'o';
  p1.nome[2] = 'a';
  p1.nome[3] = 'o';
  p1.nome[4] = '\0';
  */
  p1.nasc.dia = 29;
  p1.nasc.mes = 8;
  p1.nasc.ano = 2000;

  p2 = p1;
}
