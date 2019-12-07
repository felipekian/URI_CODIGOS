#include <stdio.h>
#include <stdlib.h>

int main() {

        double temp = 2;
        int repeticoes;
        scanf("%d",&repeticoes);

        if (repeticoes == 0) {
            printf("%10.10lf\n", 1.0);
        }
        else{
        int i;
        for (i = 1; i < repeticoes; i++) {
            temp = 2 + 1.0 / temp;
        }
        printf("%10.10lf\n", 1 + 1 / temp);
        return 0;
    }
    }


