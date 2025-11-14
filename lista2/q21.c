#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, N;
    scanf("%d%*c", &N); 
    while (N--) {
        char line[201];
        fgets(line, 201, stdin);

        int freq[26] = {0};
        int max_freq = 0;

        for (i = 0; line[i] != '\0'; i++) {
            if (isalpha(line[i])) {
                int index = tolower(line[i]) - 'a';
                freq[index]++;
            }
        }

        for (i = 0; i < 26; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
            }
        }

        for (i = 0; i < 26; i++) {
            if (freq[i] == max_freq) {
                printf("%c", 'a' + i);
            }
        }
        printf("\n");
    }
    return 0;
}