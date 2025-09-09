#include <stdio.h>

int main(){

int data;
scanf("%d", &data);

int dia = data/1000000;
// printf("%d\n", dia);
int mes = (data/10000)-dia*100;
// printf("%d\n", mes);
int ano = data - (mes*10000) - (dia*1000000);
// printf("%d\n", ano);

if (data < 99999999 && data > 1){
    if (mes > 12 || mes <= 0){
        printf("Data invalida!");
    }
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if (dia > 31 || dia < 1) {
            printf("Data invalida!");
        }
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30 || dia < 1) {
            printf("Data invalida!");
        }
    else if (mes == 2) {
        if (dia > 28) {
           printf("Data invalida!"); 
        }
    }
    }
    switch (mes)
    {
        case 1:
            printf("%d de janeiro de %d", dia, ano);
            break;
        case 2:
            printf("%d de fevereiro de %d", dia, ano);
            break;
        case 3:
            printf("%d de marco de %d", dia, ano);
            break;
        case 4:
            printf("%d de abril de %d", dia, ano);
            break;
        case 5:
        printf("%d de maio de %d", dia, ano);
            break;
        case 6:
            printf("%d de junho de %d", dia, ano);
            break;
        case 7:
            printf("%d de julho de %d", dia, ano);
            break;
        case 8:
            printf("%d de agosto de %d", dia, ano);
            break;
        case 9:
            printf("%d de setembro de %d", dia, ano);
            break;
        case 10:
        printf("%d de outubro de %d", dia, ano);
            break;
        case 11:
            printf("%d de novembro de %d", dia, ano);
            break;
        case 12:
        printf("%d de dezembro de %d", dia, ano);
            break;

    default:
        break;
    }

}
else {
    printf("Data invalida!");
}
return 0;
}