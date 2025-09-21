#include <stdio.h>
#include <string.h>

int main(){

int testes, i; 
int leds = 0;
scanf("%d", &testes);
if (testes >= 1 && testes <= 1000) {
for (i = 0; i < testes; i++) {

    char numero[102];
    scanf("%s", numero);
    int x;
    for ( x = 0; x < strlen(numero); x++) {
        char digito = numero[x];

        switch (digito) {
            case '1':
                leds = leds + 2;
                break;
            case '2':
                leds = leds + 5;
                break;
            case '3':
                leds = leds + 5;
                break;
            case '4':
                leds = leds + 4;
                break;
            case '5':
                leds = leds + 5;
                break;
            case '6':
                leds = leds + 6;
                break;
            case '7':
                leds = leds + 3;
                break;
            case '8':
                leds = leds + 7;
                break;
            case '9':
                leds = leds + 6;
                break;
            case '0':
                leds = leds + 6;
                break;
        }
    }
    printf("%d leds\n", leds);
    leds = 0;

}
}

return 0;
}