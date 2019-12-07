#include <stdio.h>
#include <stdlib.h>

int main() {

    int caso = 1, n;

    while(scanf("%d",&n) != EOF) {

        int i,j, num =0, tot =0;
        int vet[100000];

        for(i=0; i<=n; i++) {
            if(i==0) {
                vet[tot]=0;

                tot++;
            } else if(i==1) {
                vet[tot]=1;
                tot++;

            } else {
                for(j=0; j<i; j++) {
                    vet[tot]=i;
                    tot++;
                }
            }
        }
        if(n==0) {
            printf("Caso %d: 1 numero\n",caso);
            caso++;
        } else {
            printf("Caso %d: %d numeros\n",caso,tot);
            caso++;
        }
        for(i=0; i<tot; i++) {
            if(i<tot-1)
                printf("%d ",vet[i]);
            else
                printf("%d\n\n",vet[i]);
        }
    }
}
