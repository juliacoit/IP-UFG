#define MAX 10

typedef struct poly {
    double coef[MAX];
    int ordem;
} Poly;

Poly polyRead(void);
void polyPrint(Poly p);
Poly polySum(Poly A, Poly B); // retorna a+b
Poly polySub(Poly A, Poly B); // retorna a-b