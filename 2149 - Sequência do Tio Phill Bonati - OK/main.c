#include <stdio.h>
#include <stdlib.h>

//0 + 1 * 1 + 1 * 2 + 2 * 4 + 8


int main() {

    int n;
    while(scanf("%d",&n)!=EOF) {
        if(n==1 || n==0) {
            printf("0\n");
            continue;
        } else if(n==2) {
            printf("1\n");
            continue;
        }

        int i;
        unsigned long long vet[10000];
        vet[0]=0;
        vet[1]=1;

        for(i=2; i<n; i++) {
            // printf("i= %d\n\n",i);
            if(i%2==0) {
                vet[i] = vet[i-1] + vet[i-2];
                //   printf("par + = %d\n",vet[i]);
            } else {
                vet[i] = vet[i-1] * vet[i-2];
                //   printf("par + = %d\n",vet[i]);

            }

        }
        printf("%llu\n",vet[i-1]);

    }
}
