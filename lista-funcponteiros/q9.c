#include <stdio.h>

void converteEmNotasMoedas (int valor);

int main(){

int valor;
scanf("%d", &valor);

converteEmNotasMoedas(valor);

return 0;
}

void converteEmNotasMoedas (int valor){
    int cem, cinq, dez, um;
    cem = valor / 100;
    cinq = (valor - cem*100) / 50;
    dez = (valor - cem*100 - cinq*50) / 10;
    um = (valor - cem*100 - cinq*50) - dez*10;

    printf("NOTAS DE 100 = %d\n", cem);
    printf("NOTAS DE 50 = %d\n", cinq);
    printf("NOTAS DE 10 = %d\n", dez);
    printf("MOEDAS DE 1 = %d\n", um);
}