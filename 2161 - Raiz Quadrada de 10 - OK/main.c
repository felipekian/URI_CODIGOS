#include <stdio.h>
#include <stdlib.h>

int main() {

        double temp = 6;
        int repeticoes;
        scanf("%d",&repeticoes);

        if (repeticoes == 0) {
            printf("%10.10lf\n", 3.0);
        }
        else{
        int i;
        for (i = 1; i < repeticoes; i++) {
            temp = 6 + 1.0 / temp;
        }
        printf("%10.10lf\n", 3 + 1 / temp);
        return 0;
    }
    }

