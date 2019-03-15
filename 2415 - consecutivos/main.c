#include <stdio.h>
#include <stdlib.h>

/*
 * nao esta contando se o numero é negativo
 */

int main(){
    //pega o total de pedras
    int n,i;
    scanf("%d",&n);

    //recebe as pedras
    int vet_pedras[n];
    for(i=0;i<n;i++){
        scanf("%d",&vet_pedras[i]);
    }

    //verificar qual é o maior valor
    int maior_valor_pedra = 0;
    for(i=0;i<n;i++){
        if(vet_pedras[i]>maior_valor_pedra){
            maior_valor_pedra = vet_pedras[i];
        }
    }

    //cria todas as possibilidades das pedras
    int vet_possibilidades[maior_valor_pedra + 2];
    for(i=0;i<maior_valor_pedra+2;i++){
        vet_possibilidades[i] = 0;
    }

    //contabiliza as pedras;

    for(i=0;i<n;i++){ //// verificar isso aqui
            int tot_sequencia = 0;
            int valor = vet_pedras[i];
           // printf(" --valor %d \n",valor);
           int y = 0;
        while(vet_pedras[i] == valor){
            i++;
            tot_sequencia++;
            y = 1;
           // printf("tot sequencia %d  --- valor igual %d\n",tot_sequencia,valor);
        }

        if(vet_possibilidades[valor] == 0){
            vet_possibilidades[valor] = tot_sequencia;
        }
        else if(vet_possibilidades[valor] != 0 && tot_sequencia > vet_possibilidades[valor]){
            vet_possibilidades[valor] = tot_sequencia;
        }

        if(y==1){
            i--;
        }

    }

    //verificar maior ocorrencia
    int verificar = 0;

    for(i=0;i<maior_valor_pedra+1;i++){
            //printf(" ---- %d\n",i);
        if(vet_possibilidades[i]>verificar){
            verificar = vet_possibilidades[i];
           // printf("verificar %d --- vet_poss %d \n",verificar,vet_possibilidades[i]);
        }
    }
    //imprimir resultado
    printf("%d\n",verificar);

    return 0;
}
