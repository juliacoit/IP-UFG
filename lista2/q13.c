#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

#define N 502

void prefString(int n, char s[]);


int main(){

    int repeat, i;
    scanf("%d",&repeat);

    for (i = 0; i < repeat; i++) {
        char entrada[N];
        scanf(" %[^\n]", entrada);
        
        char num[20], texto[N];
        int k = 0, j = 0;

        while (isdigit(entrada[k])) {
            num[j++] = entrada[k++];
        }
        num[j] = '\0';
        
        while (entrada[k] == ' ') {
            k++;
        }
        
        // Copia o resto do texto
        j = 0;
        while (entrada[k] != '\n' && entrada[k] != '\0') {
            texto[j++] = entrada[k++];
        }
        texto[j] = '\0';
        
        int numInt = atoi(num);


        prefString(numInt, texto);
    }
    return 0;
}

void prefString(int n, char s[]){
    int i;
    int tamanhoString = strlen(s);
    char novaString[N];

    if (n > tamanhoString) {
        n = tamanhoString;
    }

    for (i = 0; i < n; i++){
        novaString[i] = s[i];
    }
    novaString[i] = '\0';
    
    printf("%s\n", novaString);
}