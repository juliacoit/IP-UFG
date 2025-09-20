#include <stdio.h>

int main()
{
    int numero;
    double somaPares = 0;
    int paresCount = 0;
    double somaImpares = 0;
    int imparesCount = 0;

    while (scanf("%d", &numero) == 1 && numero != 0)
    {
        if (numero % 2 == 0)
        {
            somaPares += numero;
            paresCount++;
        }
        else
        {
            somaImpares += numero;
            imparesCount++;
        }
    }

    double mediaPar = 0;
    double mediaImpar = 0;

    if (paresCount > 0)
    {
        mediaPar = somaPares / paresCount;
    }

    if (imparesCount > 0)
    {
        mediaImpar = somaImpares / imparesCount;
    }

    printf("MEDIA PAR: %.6lf\n", mediaPar);
    printf("MEDIA IMPAR: %.6lf\n", mediaImpar);

    return 0;
}