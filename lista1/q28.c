#include <stdio.h>
#include <string.h>

int main(){

int n1, n2, n3;
int a, b, c;

scanf("%d%d%d\n", &n1, &n2, &n3);
if (n1 < n2) {
    if (n1 < n3) {
        a = n1;
        if (n2 < n3) {
            b = n2;
            c = n3;
        }
        else {
            b = n3;
            c = n2;
        }
    }
    else {
        a = n3;
        b = n1;
        c = n2;
    }
}
else {
    if (n2 < n3) {
        a = n2;
        if (n1 < n3) {
            c = n3;
            b = n1;
        }
        else {
            c = n1;
            b = n3;
        }
    }
    else {
        a = n3;
        b = n2;
        c = n1;
    }
    
}
// printf("%d %d %d", a, b, c);
char x, y, z;
scanf(" %c %c %c", &x, &y, &z);
if (x == 'A') {
    printf("%d ", a);
    if (y == 'B') {
        printf("%d ", b);
        printf("%d", c);
    }
    else {
        printf("%d ", c);
        printf("%d", b);
    }
}
else if (x == 'B') {
    printf("%d ", b);
    if (y == 'A') {
        printf("%d ", a);
        printf("%d", c);
    }
    else {
        printf("%d ", c);
        printf("%d", a);
    }
}
else if (x == 'C') {
   printf("%d ", c);
   if (y == 'B') {
        printf("%d ", b);
        printf("%d", a);
    }
    else {
       printf("%d ", a);
        printf("%d", b); 
    }
}


return 0;
}