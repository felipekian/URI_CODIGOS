#include <stdio.h>
#include <stdlib.h>

struct botas{
    int tam;
    char lado;
}Botas[100000000];



int main(){

    int n;

    while(scanf("%d",&n)!= EOF){
        int i;

        for(i=0;i<n;i++){
            scanf("%d %c",&Botas[i].tam,&Botas[i].lado);
            setbuf(stdin,NULL);
        }

        int j , totPar =0;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(Botas[i].tam == Botas[j].tam && Botas[i].lado!=Botas[j].lado){
                    totPar++;
                    //printf("Entrei %d %c  -  %d %c \n",Botas[i].tam,Botas[i].lado,Botas[j].tam,Botas[j].lado);
                    Botas[i].tam = -2;
                    Botas[j].tam = -3;
                    Botas[i].lado = '0';
                    Botas[j].lado = '0';
                    break;
                }
            }
        }
        printf("%d\n",totPar);
    }
    return 0;
}
