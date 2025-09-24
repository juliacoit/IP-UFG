#include <stdio.h>
#include <math.h>

int main(){

int x, n;
int i;
int y = 1;

scanf("%d%d", &x, &n);

for (i = 0; i<=n; i++){
    int numerador = pow(x, i);

    while (y<=i){
    i = i*y;
    y = y+1;
    }
    if (i == 0) {
        y = 1;
    }
    // float resultado = 0;
    // resultado = resultado + (numerador/fatorial);

}

return 0;
}