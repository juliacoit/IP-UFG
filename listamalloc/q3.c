#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100


char * createEntry(int tam, char * buffer);
int verifyCountry(char * entry, char ** countries, int tam);

int main () {

    char * countries[] = {
        "brasil", "alemanha", "austria", "coreia", "espanha", "grecia",
        "estados-unidos", "inglaterra", "australia", "portugal", "suecia", "turquia",
        "argentina", "chile", "mexico", "antardida", "canada", "irlanda",
        "belgica", "italia", "libia", "siria", "marrocos", "japao"
    };
    char * traductions[] = {
        "Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!",
        "Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!",
        "Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller",
        "Feliz Navidad!", "Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!",
        "Merry Christmas!", "Nollaig Shona Dhuit!", "Zalig Kerstfeest!", "Buon Natale!",
        "Buon Natale!", "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!"
    };

    char buffer[MAX];
    char * entry;

    while (scanf(" %[^\n]%*c", buffer) != EOF){
    int tam = strlen(buffer);
    entry = createEntry(tam, buffer);
    tam = strlen(entry);

    int countryIndex = verifyCountry(entry, countries, tam);
    // printf("index do pais: %d\n", countryIndex);

    if (countryIndex == -1) {
        printf("-- NOT FOUND --\n");
    } else {
        printf("%s\n", traductions[countryIndex]);
    }
    free(entry);
}

    return 0;
}

char * createEntry(int tam, char * buffer){
    char * entry = (char*)malloc((tam + 1) * sizeof(char));
    strcpy(entry, buffer);
    return entry;
}

int verifyCountry(char * entry, char ** countries, int tam){
    int i, j;
    int countryIndex;
    int itsSame = 1;
    for (i = 0; i < 24; i++){
        int staticSize = strlen(countries[i]);
        if (staticSize == tam){
           for (j = 0; j < staticSize; j++){
            if (countries[i][j] != entry[j]){
            itsSame = 0;
           }
        }
        if (itsSame == 1) {
            countryIndex = i;
            return countryIndex;
        }
        itsSame = 1;
    }
}
if (itsSame == 0){
    return -1;
}
return -1;
}