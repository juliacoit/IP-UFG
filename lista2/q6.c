#include <stdio.h>
#include <string.h>

int main()
{

    int testes, i;
    scanf("%d", &testes);

    for (i = 0; i < testes; i++)
    {
        char word[6];
        scanf("%s", word);

        int oneFor, twoFor, threeFor, erro1 = 0, erro2 = 0, erro3 = 0;
        char one[] = "one";
        char two[] = "two";
        char three[] = "three";

        for (oneFor = 0; oneFor < strlen(one); oneFor++)
        {
            if (word[oneFor] != one[oneFor])
            {
                erro1++;
            }
        }
        if (erro1 <= 1)
        {
            printf("1\n");
        }
        for (twoFor = 0; twoFor < strlen(two); twoFor++)
        {
            if (word[twoFor] != two[twoFor])
            {
                erro2++;
            }
        }
        if (erro2 <= 1)
        {
            printf("2\n");
        }
        for (threeFor = 0; threeFor < strlen(three); threeFor++)
        {
            if (word[threeFor] != three[threeFor])
            {
                erro3++;
            }
        }
        if (erro3 <= 1)
        {
            printf("3\n");
        }
        erro1 = 0;
        erro2 = 0;
        erro3 = 0;
    }

    return 0;
}
