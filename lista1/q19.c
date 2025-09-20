#include <stdio.h>

int main(){

int cc, dr, rt, class;
int teste1 = 0;
int teste2 = 0;
int teste3 = 0;

scanf("%d", &cc);
scanf("%d", &dr);
scanf("%d", &rt);

if (cc < 7) {
    // teste 1
    teste1 = 1;
}
if (dr > 50) {
    // teste 2
    teste2 = 1;
}
if (rt > 80000) {
    // teste 3
    teste3 = 1;
}
if (teste1 && teste2 && teste3) {
    class = 10;
}
else if (teste1 && teste2) {
    class = 9;
}
else if (teste1) {
    class = 8;
}
else {
    class = 7;
}

printf("ACO DE GRAU = %d", class);


return 0;
}