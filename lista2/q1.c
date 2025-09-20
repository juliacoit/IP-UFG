#include <stdio.h>

int main(){

int n, i;
scanf("%d", &n);
if (n >= 1 && n <= 100000){

int V[n];
for (i = 0; i < n; i++) {
    int valor;
    scanf("%d", &valor);
    V[i] = valor;
}
int quantBuscas, x, y, achei = 0;
scanf("%d", &quantBuscas);
if (quantBuscas >= 1 && quantBuscas <= 1000) {
    for (x = 0; x < quantBuscas; x++) {
        int busca;
        scanf("%d", &busca);
        for (y = 0; y < n; y++){
           // printf("valor do vetor em %d: %d\n", y, V[y]);
            if (V[y] == busca) {
                achei = 1;
                // printf("ACHEI\n");
            }
        }

        if (achei == 1) {
            printf("ACHEI\n");
        }
        else {
            printf("NAO ACHEI\n");
        }
        achei = 0;
    }
}

}
return 0;
}