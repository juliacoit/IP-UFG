#include <stdio.h>

int main(){

int testes, a, b;
int i;
scanf("%d", &testes);
for (i = 0; i < testes; i++){
    scanf("%d%d", &a, &b);
    if (a==b && (a || b) == 0){
        break;
    }
    int a3 = a/100;
    int a2 = (a/10)-(a3*10);
    int a1 = a-(a3*100)-(a2*10);

    int novoA = (a1*100)+(a2*10)+(a3);
    // printf("%d ", novoA);

    int b3 = b/100;
    int b2 = (b/10)-(b3*10);
    int b1 = b-(b3*100)-(b2*10);

    int novoB = (b1*100)+(b2*10)+(b3);
    // printf("%d\n", novoB);

    if (novoA > novoB){
        printf("%d\n", novoA);
    }
    else {
        printf("%d\n", novoB);
    }
    
}
return 0;
}