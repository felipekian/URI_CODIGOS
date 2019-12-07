#include <stdio.h>
#include <stdlib.h>

int main() {

    int N=0, i=0;
    scanf("%d",&N);
    int V1[N];
    float V2[N];
    if(N >= 3 && N <= 100) {
        for(i=0; i<N; i++) {
            scanf("%d %f",&V1[i],&V2[i]);

        }
        //vê qual é o maior indice
        double maior = V2[0];
        int indiceMaior = 0;
        for(i=1; i<N; i++) {
            if(V2[i] > maior) {
                maior = V2[i];
                indiceMaior = i;
            }
        }
        // faz os teste de saida
        if(maior < 8) {
            printf("Minimum note not reached\n");

        } else {
            printf("%d\n",V1[indiceMaior]);
        }
    }
}
