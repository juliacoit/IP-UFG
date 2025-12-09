#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE * arq = NULL;
    int l = 0;

    arq = fopen("notas", "r");
    while(fscanf(arq,"%*[^\n]%*c") != EOF) l++;

    printf("N de linhas: %d\n", l);
    fclose(arq);
    return 0;
}