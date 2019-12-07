#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int vet[] , int tam){
        int menor , indiceMenor;
        int i , j;

        for(i=0;i<tam-1;i++){
            menor = vet[i];
            indiceMenor = i;

            for(j=i+1;j<tam;j++){
                if(menor > vet[j]){
                    menor = vet[j];
                    indiceMenor = j;
                }
            }
            vet[indiceMenor] = vet[i];
            vet[i] = menor;
        }

}


int main(){

    int Bilhetes_orig , Tot_pessoas;

    while(scanf("%d %d",&Bilhetes_orig,&Tot_pessoas)){
            if(Bilhetes_orig==0 && Tot_pessoas==0){
                return 0;
            }

            int vet_tot[Tot_pessoas];
            int i;

            for(i=0;i<Tot_pessoas;i++){
                scanf("%d",&vet_tot[i]);
            }

            SelectionSort(vet_tot , Tot_pessoas);

            int j;
            int totCont = 0 , cont =0;

            for(i=1;i<=Bilhetes_orig;i++){
                    cont =0;
                for(j=0;j<Tot_pessoas;j++){
                        if(vet_tot[j] > i){
                            break;
                        }
                        else if(vet_tot[j] == i){
                            cont++;
                        }
                }
                if(cont >= 2){
                    totCont++;
                }
            }

           printf("%d\n",totCont);
    }

}
