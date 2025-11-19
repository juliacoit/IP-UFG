#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct vetor4d {
    float u;
    float x;
    float y;
    float z;
    float norma;
} v4d;

float normaCalculator(v4d A);
float ** orderVector(int loop);
void ordenaVetores(float ** vetores, int loop);

int main(){

    int loop, i = 0;
    scanf("%d", &loop);
    float ** vetores = orderVector(loop);

    while (i < loop) {

        v4d vetor4d;
        scanf("%f%f%f%f", &vetor4d.u, &vetor4d.x, &vetor4d.y, &vetor4d.z);
        vetor4d.norma = normaCalculator(vetor4d);

        vetores[i][0] = vetor4d.u;
        vetores[i][1] = vetor4d.x;
        vetores[i][2] = vetor4d.y;
        vetores[i][3] = vetor4d.z;
        vetores[i][4] = vetor4d.norma;

       // printf("Vetor: (%.2f, %.2f, %.2f, %.2f) Norma: %.2f\n", vetor4d.u, vetor4d.x, vetor4d.y, vetor4d.z, norma);
        i++;
    }



    return 0;
}

float normaCalculator(v4d A){
    float A.norma = sqrt(pow(A.u, 2) + pow(A.x, 2) + pow(A.y, 2) + pow(A.z, 2));
    return A.norma;
}

float ** orderVector(int loop){
    float ** vectors = (float **)malloc(loop * sizeof(float *));
    int i;
    for (i = 0; i < 5; i++){
    vectors[i] = (float *)malloc(sizeof(float));
    }

    return vectors;
}

void ordenaVetores(float ** vetores, int loop){
    int i, j, temp, menor;
    for (i = 0; i < loop-1; i++){
        if (vetores[i][4] < vetores[i+i][4]){
            menor = vetores[i][4];
        }
    }
}