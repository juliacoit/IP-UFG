#include <stdio.h>

int main(){

int n;
int quantIgual = 0;

scanf("%d", &n);
int v[n];
if (n>=1 && n <= 1000){
    v[n];
    int i;
    for (i = 0; i < n; i++){
        int valor;
        scanf("%d", &valor);
        v[i] = valor;
    }
    int j, k;
    scanf("%d", &k);
    for (j = 0; j < n; j++) {
        if (v[j] >= k) {
            quantIgual++;
        }
    }
}
else {
    scanf("%d", &n);
}

printf("%d", quantIgual);

return 0;
}