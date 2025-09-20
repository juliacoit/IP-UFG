#include <stdio.h>
#include <math.h>

int main(){

int i, x, vezes;
scanf("%d", &vezes);

for (i = 1; i <= vezes; i++){
    int numero = i;
    int cubo = pow(numero, 3);
    for (x = 1; x < cubo; x++){
        if (x % 2 == 1) {
            // é impar
            printf("%d", x);
        }
    }

}

return 0;
}  