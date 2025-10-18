#include <stdio.h>
#define N 1000000

int arr[N];

void selectionSort(int A[], int n);

int main(){

int tamanho;
scanf("%d", &tamanho);
int i;
float mediana;
for (i = 0; i < tamanho; i++) {
    scanf("%d", &arr[i]);
}
selectionSort(arr, tamanho);
//se for par, pega a media dos 2 numeros
if (tamanho % 2 == 0) {
    int primeiraMetade = arr[(tamanho/2)-1];
    int segundaMetade = arr[tamanho/2];

    mediana = (primeiraMetade + segundaMetade) /2.0;
}
else {
    mediana = arr[tamanho/2];
}
printf("%.2f", mediana);

return 0;
}

void selectionSort(int A[], int n) {
    int i, im, k;

    // so vai ate n-1 porque ate chegar no ultimo ja ta ordenado
    for (i=0; i<n-1; i++){
        // im é como se fosse o indice do menor (ate o momento)
        im = i;
        for (k = i+1; k < n; k++){
            if (A[k] < A[im]) {
                im = k;
            }
        }
        int tmp = A[i];
        A[i] = A[im];
        A[im] = tmp;
    }
}