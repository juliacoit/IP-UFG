#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE * arq = NULL;
    int l = 0;
    
    fopen("notas", "r");
    while(fscanf(arq,"%*[^\n]") != EOF) l++;

    printf("N de linhas: %d\n", l);
    fclose(arq);
    return 0;
}