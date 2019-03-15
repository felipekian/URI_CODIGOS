#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Cafee{
    int tot;
    char frutas[30];
}cafe[10];

void pegar_dados(int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&cafe[i].tot);
        getchar();
        gets(cafe[i].frutas);

    }
}

void imprime_caso(int tot_vitaminas){
        if(tot_vitaminas>110 && tot_vitaminas<130){
            printf("%d mg\n",tot_vitaminas);
            return;
        }else if(tot_vitaminas <= 110 ){
            printf("Mais %d mg\n",110-tot_vitaminas);
            return;
        }else if(tot_vitaminas >=130 ){
            printf("Menos %d mg\n",tot_vitaminas - 130);
            return;
        }
}

int contabilizar(int n){
    int i, tot_vitaminas = 0;

    for(i=0;i<n;i++){
            if(strcmp("suco de laranja" , cafe[i].frutas)==0){
                    tot_vitaminas+= cafe[i].tot * 120;

            }else if(strcmp("morango fresco" , cafe[i].frutas)==0){
                    tot_vitaminas+= cafe[i].tot * 85;

            }else if(strcmp("mamao" , cafe[i].frutas)==0){
                    tot_vitaminas+= cafe[i].tot * 85;

            }else if(strcmp("goiaba vermelha" , cafe[i].frutas)==0){
                    tot_vitaminas+= cafe[i].tot * 70;

            }else if(strcmp("manga" , cafe[i].frutas)==0){
                    tot_vitaminas+= cafe[i].tot * 56;

            }else if(strcmp("laranja" , cafe[i].frutas)==0){
                    tot_vitaminas+= cafe[i].tot * 50;

            }else if(strcmp("brocolis" , cafe[i].frutas)==0){
                    tot_vitaminas+= cafe[i].tot * 34;
            }
        }

        return tot_vitaminas;
}

void inicio(){
    int n;

    while(scanf("%d",&n)&& n!=0){
    getchar();

        pegar_dados(n);

        int tot_vitaminas = contabilizar(n);

        imprime_caso(tot_vitaminas);


    }
    return;
}


int main(){
    inicio();

    return 0;
}
