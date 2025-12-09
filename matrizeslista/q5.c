#include <stdio.h>

int main() {
    int matrix[6][6];
    int i, j, r, c;
    int current_sum;
    int max_sum = -100; 

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (r = 0; r <= 3; r++) {
        for (c = 0; c <= 3; c++) {
            
            current_sum = 0;
            current_sum += matrix[r][c];
            current_sum += matrix[r][c+1];
            current_sum += matrix[r][c+2];
            current_sum += matrix[r+1][c+1];
            current_sum += matrix[r+2][c];
            current_sum += matrix[r+2][c+1];
            current_sum += matrix[r+2][c+2];

            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }

    printf("%d\n", max_sum);

    return 0;
}