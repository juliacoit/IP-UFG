#include "poly.h"

int main () {
    Poly A, B, R;

    A = polyRead();
    B = polyRead();
    R = polyRead();

    polyPrint(A);
    polyPrint(B);
    polyPrint(R);

    return 0;
}