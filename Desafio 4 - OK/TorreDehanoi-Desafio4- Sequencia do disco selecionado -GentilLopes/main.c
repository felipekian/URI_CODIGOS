#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    int N , j;
    printf("Digite o numero de discos da pilha: \n");
    scanf("%d",&N);

    printf("\nDigite o disco selecionado ate o disco %d: \n",N);
    scanf("%d",&j);

    int i,K, An ,M;

    K = pow(2,j);

    M = pow(2,N);

    printf("\n\n");
    int P = K/2;

    //o numero maximo de movimentos são 2**n possibilidades

    for(i=1;i<=K*2;i++){

        An = K*i-P;
        if(An>M){
            continue;
        }else if (i==K*2){
                  printf("%d. ",An);
                  }else
        printf("%d, ",An);
    }
printf("\n\n");
}
