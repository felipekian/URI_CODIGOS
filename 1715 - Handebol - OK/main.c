#include <stdio.h>
#include <stdlib.h>

int main(){

    int jogadores, partidas;
    scanf("%d %d",&jogadores, &partidas);

    int vet[jogadores][partidas], i,j;

    int cont =0 , total =0;

    for(i=0;i<jogadores;i++){
            cont =0;
        for(j=0;j<partidas;j++){
            scanf("%d",&vet[i][j]);
            if(vet[i][j]> 0){
                cont++;
            }

        }
        if(cont == partidas){
            total++;
        }
    }
    printf("%d\n",total);

}
