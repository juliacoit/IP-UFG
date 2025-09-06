#include <stdio.h>

int main(){

int popA, popB;
float taxaA, taxaB;

scanf("%d", &popA);
scanf("%d", &popB);

taxaA = 0.03;
taxaB = 0.015;
int anos = 0;

if (popA<popB) {
    do {
    popA = popA + (popA*taxaA);
    popB = popB + (popB*taxaB);

    anos++;

    } while (popA < popB);
    
    printf("ANOS = %d\n", anos);
}
else {
    printf("A maior que B");
}

return 0;
}