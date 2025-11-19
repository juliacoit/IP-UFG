#include <stdio.h>

#define MAX_DIM 1000 

int matrix[MAX_DIM][MAX_DIM];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int wally_encontrado = 0;
    int wally_i = -1;
    int wally_j = -1;

    int i_up, i_down, j_left, j_right;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            
            if (matrix[i][j] == 1111) {
                
                i_up = (i - 1 + n) % n;
                i_down = (i + 1) % n;
                j_left = (j - 1 + m) % m;
                j_right = (j + 1) % m;

                if (matrix[i_up][j] == 4 &&
                    matrix[i][j_left] == 0 &&
                    matrix[i][j_right] == 0 &&
                    matrix[i_down][j] == 8) 
                {
                    wally_encontrado = 1;
                    wally_i = i;
                    wally_j = j;
                    break; 
                }
            }
        }
        if (wally_encontrado) {
            break; 
        }
    }

    if (wally_encontrado) {
        printf("%d %d\n", wally_i, wally_j);
    } else {
        printf("WALLY NAO ESTA NA MATRIZ\n");
    }

    return 0;
}