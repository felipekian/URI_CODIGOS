#include <stdio.h>
#include <stdlib.h>

int main(){

    int vezes,i;

    scanf("%d",&vezes);

    for(i=0;i<vezes;i++){

            int n,j;
            scanf("%d",&n);
            int vet[n];
            for(j=0;j<n;j++){
                scanf("%d",&vet[j]);
            }
            printf("Case %d: %d\n",i+1,vet[(n/2)]);
    }
}
