// O programa imprime oi no terminal

#include <stdio.h> // incluindo a lib stdio

// iniciando o programa principal
int main(){

    char ch;
    ch = 'a'; // equivalente à ch recebe o número 97 da tabela ASCII
    printf("%c\n", ch); // prints the character stored in ch

    ch = 97; // também pode ser feito
    printf("%c\n", ch); // prints the character stored in ch

    int M;
    // uma variável que permite armazenar constantes inteiras
    M = 20;
    printf("%d\n", M);
    M = 'a';
    printf("%d\n", M);
    /*
    dentro da memória RAM , um int ocupa 4 bytes
    ou seja 32 bits, 2^32
    */

    return 0;
}