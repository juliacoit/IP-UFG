#include <stdio.h>

#define NMAX_W 100
#define NMAX_CHW 50
#define NMAX_LINE NMAX_W*NMAX_CHW+NMAX_W

//
/**
 * brief extrai as iniciais de um texto de entrada.
 * @param str texto de entrada
 * @param iniciais vetor de iniciais
 * @param n quantidade de iniciais
 */
void extrai_iniciais(char * const str, char * iniciais, int * n);

/**
 * @brief Contabiliza a quantidade de aliterações
 * 
 * @param iniciais vetor de iniciais
 * @param n quantidade de iniciais
 * @return int quantidade de aliterações
 */
int conta_aliteracao(char * const iniciais, int n);

int main() {
    char str[NMAX_LINE];
    char iniciais[50];
    int n, i, alit;

    while( EOF != scanf("%[^\n]%*c", str) ) {
        extrai_iniciais(str, iniciais, &n);
        alit = conta_aliteracao(iniciais, n);
        printf("%d\n", alit);
    }
    
    return 0;
}

void extrai_iniciais(char * const str, char * iniciais, int * n) {
    int i = 0, k = 0;
    //He has four fanatic fantastic fans      
    while(str[i]!='\0') {
        // desprezar os espacos

        while(str[i]==' ' && str[i]!='\0')i++;
        if(str[i]=='\0') break;
        
        if(str[i]>='A' && str[i]<='Z') iniciais[k] = str[i]+32;
        else iniciais[k] = str[i];
        k++;
        while(str[i]!=' '&& str[i]!='\0')i++;
    }
    *n = k;
}

int conta_aliteracao(char * const iniciais, int n) {
    int i=1;
    char ini = iniciais[0];
    int alit = 0;
    while(i<n) {
        if(iniciais[i]==ini) {
            alit++;
            while(iniciais[i]==ini && i<n)i++;
            ini = iniciais[i];
            i++;
        } else {
            ini = iniciais[i];
            i++;
        }
    }
    return alit;
}