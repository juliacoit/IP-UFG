#include <stdio.h>
#include <string.h>

int main() {
    char line[52];
    while (fgets(line, 52, stdin) != NULL) {
        int should_be_upper = 1;
        int len = strlen(line);
        int i;
        
        for (i = 0; i < len; i++) {
            if (line[i] >= 'a' && line[i] <= 'z') {
                if (should_be_upper) {
                    line[i] = line[i] - 32; 
                }
                should_be_upper = !should_be_upper;
            } else if (line[i] >= 'A' && line[i] <= 'Z') {
                if (!should_be_upper) {
                    line[i] = line[i] + 32; 
                }
                should_be_upper = !should_be_upper;
            }
        }
        printf("%s", line);
    }
    return 0;
}