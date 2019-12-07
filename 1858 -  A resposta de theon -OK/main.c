#include <stdio.h>
#include <stdlib.h>

int main(){

    int Casos =0;
    scanf("%d", &Casos);

    int Vetor[Casos];

    int i =0;

    for(i=0;i<Casos;i++){
        scanf("%d",&Vetor[i]);
    }
    int menor = Vetor[0];
    int indice = 0;

    for(i=1;i<Casos;i++){
            if(Vetor[i] < menor){
                menor = Vetor[i];
                indice = i;
            }
        }
        printf("%d\n",indice+1);

    }



