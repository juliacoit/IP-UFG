#include <stdio.h>

int main(){

int x, y;
scanf("%d %d", &x, &y);

if (x % 2 == 0) {
    int i;
    for (i = 0; i < y; i++){
        printf("%d ", x);
        x = x+2;
    }
    printf(" \n");
}
else {
    printf("O PRIMEIRO NUMERO NAO E PAR\n");
}

return 0;
}