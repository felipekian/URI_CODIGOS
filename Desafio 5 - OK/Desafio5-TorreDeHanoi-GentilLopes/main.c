#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    int N , j;
    printf("Digite o numero de discos da pilha: \n");
    scanf("%d",&N);

    printf("\nDigite o disco selecionado para teste: \n");
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
            }else
                printf("Equacao -> %d*%d-%d  e o resultado %d;\n",K,i,P,An);

    }
printf("\n");
}
