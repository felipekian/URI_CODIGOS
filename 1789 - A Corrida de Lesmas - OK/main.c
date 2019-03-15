#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,L,Maior=0;

    while(scanf("%d",&L)!= EOF) {

        int V[L];
        Maior = 0;
        for(i=0; i<L; i++) {
            scanf("%d",&V[i]);
        }
        Maior = V[0];
        for(i=1; i<L; i++) {
            if(Maior < V[i]) {
                Maior = V[i];
            }
        }
        if(Maior < 10) {
            printf("1\n");
        } else if(Maior >= 10 && Maior < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }
}


