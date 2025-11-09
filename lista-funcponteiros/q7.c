#include <stdio.h>

/**
* Imprime os bits dos n bytes endereçados por end_byte.
* @param end_byte endereço do primeiro byte a ser impresso
* @param n de bytes a serem impressos
*/
void print_bytes( const void * end_byte, int n );
void print_byte(unsigned char * p);

int main(){

double n;
scanf("%lf", &n);

unsigned char uc = n;
unsigned short us = n;
unsigned int ui = n;
float f = n;

print_bytes( (unsigned char *)&uc, sizeof(unsigned char) ); printf("\n");
print_bytes( (unsigned char *)&us, sizeof(unsigned short) ); printf("\n");
print_bytes( (unsigned char *)&ui, sizeof(int) ); printf("\n");
print_bytes( (unsigned char *)&f, sizeof(float) ); printf("\n");
print_bytes( (unsigned char *)&n, sizeof(double) ); printf("\n");

return 0;
}

void print_bytes( unsigned char * end_byte, int n) {
    int i;
    for (i = 0; i < n ; i++) {
        print_byte( end_byte + i );
        printf(" ");
    }
}

void print_byte(unsigned char * p) {
    unsigned char x = *p;
    int w = 128;
    int i;
    for (i = 0; i<8; i++) {
        printf("%d", x/w);
        x = x%w;
        w = w/2;
    }
}