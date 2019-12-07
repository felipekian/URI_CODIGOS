#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int C;
    scanf("%d",&C);

    while(C--) {

        int B,E;

        scanf("%d%d",&B,&E);

        int i;
        if (B>=1 && E<=12221 && B<=E) {
            char vetor[E-B+30][10];
            int c=0;
            for(i=B; i<=E; i++) {

                printf("%d",i);
                sprintf(vetor[c],"%d",i);
                c++;

            }
            int j;
            for(i=E-B; i>=0; i--) {
                for(j=strlen(vetor[i])-1; j>=0; j--) {

                    printf("%c",vetor[i][j]);

                }
            }
            printf("\n");
        }
    }
}
