#include <stdio.h>
#include <stdlib.h>
int main(){
    int Qtdforam ,  QtdVoltaram;

    while(scanf("%d %d",&Qtdforam ,&QtdVoltaram)!=EOF){

        int aux =0,i;
        int vet[Qtdforam];


        for(i=0;i<Qtdforam;i++){
            vet[i]=0;
        }
        for(i=0;i<QtdVoltaram;i++){
            scanf("%d",&aux);
            vet[aux-1]=aux;
        }
        if(Qtdforam == QtdVoltaram){
            printf("*\n");
            continue;
        }

        for(i=0;i<Qtdforam;i++){
            if(vet[i]==0){
                printf("%d ",i+1);
            }
        }
        printf("\n");
    }

}



