#include <stdio.h>

int main(){

    int input;
    double c1, c2, hip;

    scanf("%d", &input);

    for (hip = 1; hip <= input; hip++){
        for (c1 = 1; c1 < hip; c1++){
            for (c2 = 1; c2 < hip; c2++){
                if ((hip * hip) == ((c1 *c1) + (c2*c2))){
                    if (c1 <= c2) {
                    printf("hipotenusa = %.0lf, catetos %.0lf e %.0lf\n", hip, c1, c2);
                    }
                }
            
        }
        }
    }

return 0;
}