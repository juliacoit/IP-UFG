#include <stdio.h>
#define N 502

int main(){

int dimen, m[N][N], i, j;
scanf("%d", &dimen);

for (i = 0; i < dimen; i++){
    for (j = 0; j < dimen; j++){
        scanf("%d", &m[i][j]);
    }
}
i = 0;
j = 0;

for (i = 0; i < dimen; i++){
    for (j = 0; j < dimen; j++){
        if (j == i) {
            printf("%d\n", m[i][(dimen-1)-j]);
        }
    }
}

return 0;
}