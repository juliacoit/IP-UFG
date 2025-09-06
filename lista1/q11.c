#include <stdio.h>

int main(){

int numero, x, f;
scanf("%d", &numero);

x =1;
f=1;

while (x<=numero){
f = f*x;
x = x+1;
}

if (numero == 0) {
    f = 1;
}

printf("%d! = %d", numero,f);

return 0;
}