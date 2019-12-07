#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i;
    scanf("%d",&n);

    int vet[n];

    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    int y =0;
    for(i=1;i<n;i++){
        if(vet[i]<vet[i-1]){
            printf("%d\n",i+1);
            y=1;
            break;
        }
    }
    if(y==0){
        printf("0\n");
    }
}
