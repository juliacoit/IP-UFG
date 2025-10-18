#include <stdio.h>
#define N 102

void ordena (int v[], int o[], int n);
void selectionSort(int A[], int n)

int main() {



    return 0;
}

void ordena (int const v[], int o[], int n){
    int u[N];
    int i, im, k;

    for (i = 0; i < n; i++){
        u[i] = 0;
    }
    for (i = 0; i < n; i++){
      //  for (im = 0; im < n && u[im] == 1; im++)
      im = 0;
      while (im < n && u[im] == 1) {
        im++
    }
      
      for (k=0; k<n; k++){
        if (v[k] < v[im] && v[k] == 0) {
            im = k
        }
        o[i] = v[im];
        u[im] = 1;
      }

    }
}

void selectionSort(int A[], int n) {
    int i, im, k;

    // so vai ate n-1 porque ate chegar no ultimo ja ta ordenado
    for (i=0; i<n-1; i++){
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