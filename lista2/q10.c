#include <stdio.h>
#include <string.h>

int main() {
    int numero;

    while (scanf("%d", &numero) != EOF) {
        int bin[32];
        int i;
        int mod;
        int flag = 0;
        for (i = 31; i >= 0; i--){
            mod = numero % 2;
            bin[i] = mod;
            numero = numero / 2;
        }
        int j;
        for (j = 0; j < 32; j++){
            if(bin[j]==1){
                flag = 1;
            }
            if(flag == 1){
                printf("%d", bin[j]);
            }
            
        }
        if(flag == 0){
            printf("0");
        }
        printf("\n");

    }

    return 0;
}