#include <stdio.h>
#include <stdlib.h>

int main(){

    long int tot_valores;
    scanf("%ld",&tot_valores);

    long int vet_valares[tot_valores]; long int i;

    for(i=0;i<tot_valores;i++){
        scanf("%ld",&vet_valares[i]);
    }

    long int teste_valor = 0 , p = 0 , cont_ocorrencias;

    long int vet_armazenado[p];

    for(i=0 ; i<tot_valores ; i++){
       long int valor_tt = vet_valares[i];
        cont_ocorrencias = 0;
        int y = 0;
        while(vet_valares[i] == valor_tt){
            cont_ocorrencias++;
            i++;
            y=1;
        }

        if(y = 1){
            i--;
        }

        if(cont_ocorrencias > 0){
            vet_armazenado[p] = cont_ocorrencias;
            p++;
        }

    }
    long int maior = -1;
    for(i=0;i<p;i++){
        if(vet_armazenado[i] > maior){
            maior = vet_armazenado[i];
        }
    }

    printf("%ld\n",maior);

    return 0;
}

