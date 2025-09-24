#include <stdio.h>
#include <string.h>

int main() {

    int entrada1, entrada2;
    scanf("%d%d", &entrada1, &entrada2);

    do
    {
        int soma = entrada1 + entrada2;
        char stringSoma[102];

        snprintf(stringSoma, sizeof(stringSoma), "%d", soma);
        int i;
        for (i = 0; i < strlen(stringSoma); i++) {
            if (stringSoma[i] != '0') {
                printf("%c", stringSoma[i]);
            }
        }
        printf("\n");

        scanf("%d%d", &entrada1, &entrada2);
    } while (entrada1 != 0 && entrada2 != 0);

    return 0;
}