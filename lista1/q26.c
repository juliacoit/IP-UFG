#include <stdio.h>

int main(){

int n;
scanf("%d", &n);

if (n <= 99999) {
    if (n < 10 && n > -1) {
            printf("PALINDROMO");
    }
    else if (n <= 99 && n > 9){
            //  2 digitos
        int n2 = (n/10);
        int n1 = n-(n2*10);
        
        int novoN = (n2*10)+(n2);
        if (n == novoN) {
            printf("PALINDROMO");
        }
        else {
            printf("NAO PALINDROMO");
        }
    }
    else if (n <= 999 && n > 99){
        //  3 digitos
        int n3 = n/100;
        int n2 = (n/10)-(n3*10);
        int n1 = n-(n3*100)-(n2*10);
        
        int novoN = (n1*100)+(n2*10)+(n3);
        if (n == novoN) {
            printf("PALINDROMO");
        }
        else {
            printf("NAO PALINDROMO");
        }
    }
    else if (n <= 9999 && n > 999) {
        // 4 digitos
        int n4 = n/1000;
        int n3 = (n/100)-(n4*10);
        int n2 = (n/10)-(n3*10)-(n4*100);
        int n1 = n-(n3*100)-(n2*10)-(n4*1000);
        
        int novoN = (n1*1000)+(n2*100)+(n3*10)+n4;
        // printf("numero ao contrario %d\n", novoN);

        if (n == novoN) {
            printf("PALINDROMO");
        }
        else {
            printf("NAO PALINDROMO");
        }
        }
    else {
        // 5 digitos
        int n5 = n/10000;
        int n4 = (n/1000)-(n5*10);
        int n3 = (n/100)-(n4*10)-(n5*100);
        int n2 = (n/10)-(n3*10)-(n4*100)-(n5*1000);
        int n1 = n-(n5*10000)-(n4*1000)-(n3*100)-(n2*10);
        
        int novoN = (n1*10000)+(n2*1000)+(n3*100)+(n4*10)+n5;
        // printf("numero ao contrario %d\n", novoN);

        if (n == novoN) {
            printf("PALINDROMO");
        }
        else {
            printf("NAO PALINDROMO");
        }
    }
}
else {
    printf("NUMERO INVALIDO");
}

return 0;
}