#include <stdio.h>
#include <string.h>

int main(){

    float notaFinal, mediaProvas, mediaListas, notaTrabalho;
    float p1, p2, p3, p4, p5, p6, p7, p8;
    float l1, l2, l3, l4, l5;
    int matricula;
    int presenca;
    
    scanf("%d", &matricula);
    while (matricula != -1){
    scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f%d", &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, 
    &l1, &l2, &l3, &l4, &l5, &notaTrabalho, &presenca);
    mediaProvas = (p1+p2+p3+p4+p5+p6+p7+p8)/8;
    mediaListas = (l1+l2+l3+l4)/4;
    notaFinal = (mediaProvas*0.7)+(mediaListas*0.15)+(0.15*notaTrabalho);
    
    if (notaFinal >= 6 && presenca >= 128*0.75 ){
        //aprovado
        printf("Matricula: %d, Nota Final: %f, Situacao Final: APROVADO\n", matricula, notaFinal);
    }
    else if (notaFinal < 6 && presenca >= 128*0.75){
        // reprovado por nota
        printf("Matricula: %d, Nota Final: %f, Situacao Final: REPROVADO POR NOTA\n", matricula, notaFinal);
    }
    else if (notaFinal >= 6 && presenca < 128*0.75) {
        // reprovado por frequencia
        printf("Matricula: %d, Nota Final: %f, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, notaFinal);
    }
    else {
        // reprovado por td
        printf("Matricula: %d, Nota Final: %f, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, notaFinal);

    }
    
    scanf("%d", matricula);
    }
    
    return 0;
}