#include <stdio.h>

void print_byte(unsigned char * p);
void pBytes(unsigned char * v, int n);

int main() {
    while (1){

    double d;
    scanf("%lf", &d);
    float f = d;
    int i = d;
    short s = d;
    char c = d;

    pBytes( (unsigned char *)&d, sizeof(double) ); printf("\n");
    pBytes( (unsigned char *)&f, sizeof(float) ); printf("\n");
    pBytes( (unsigned char *)&i, sizeof(int) ); printf("\n");
    pBytes( (unsigned char *)&s, sizeof(short) ); printf("\n");
    pBytes( (unsigned char *)&c, sizeof(char) ); printf("\n");
    }
    return 0;
}
void pBytes( unsigned char * v, int n) {
    int i;
    for (i = n-1; i >= 0 ; i--) {
        print_byte( v + i );
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