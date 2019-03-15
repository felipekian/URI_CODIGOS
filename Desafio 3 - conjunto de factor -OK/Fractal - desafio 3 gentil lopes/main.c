#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    //recebe o numero de etapas de contrução
    int N;
    printf("Digite o numero de etapas: \n");
    scanf("%d",&N);

    int K,An,i;
    //faz a sequencia ate o valor dos N valores do fractal de 0 ate N

        K=pow(2,N+1);
        //printf sem Denominador...apenas numerador
    printf("\n");

    printf("A sequencia apenas com numerador com %d etapas de construcao: \n\n",N);

    for(i=1;i<=K;i++){

        An=i+2*floor((i-1)/4)+6*floor((i-1)/8)-1;
        printf("%d,  ",An);
    }

    //print com numerador e denominador
    printf("\n\n");

    int denominador = pow(3,N);

    printf("A sequencia com Numerador e Denominador com %d etapas de construcao: \n\n",N);

    for(i=1;i<=K;i++){

    An=i+2*floor((i-1)/4)+6*floor((i-1)/8)-1;

    printf("%d/%d,  ",An,denominador);

        }
        //formula para gerar a sequencia do conjunto de cantor
        printf("\n\nA Equacao eh:\n\n");
        printf("A(i)=i+2*floor((i-1)/4)+6*floor((i-1)/8)-1.\n");
    }







