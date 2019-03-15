#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int vet[] , int tam){
    int menor , indiceMenor;
    int i ,j;

    for(i=0;i<tam-1;i++){
        menor = vet[i];
        indiceMenor = i;
        for(j=i+1 ; j<tam ; j++){
            if(menor < vet[j]){
                menor = vet[j];
                indiceMenor = j;
            }
        }
        vet[indiceMenor] = vet[i];
        vet[i] = menor;
    }

}

int main(){

    int n;
    while(scanf("%d",&n)&&n!=0){

        int vet_teste[n] , vet[n];
        int i,aux=0;

        for(i=0;i<n;i++){
            scanf("%d",&aux);
            vet[i]=aux;
            vet_teste[i]=aux;
        }

        SelectionSort(vet , n);

      //  for(i=0;i<n;i++){
      //      printf("%d ",vet[i]);
     //   }

        int escolhido = vet[1];
       // printf("\nescolhido %d\n",escolhido);

        for(i=0;i<n;i++){
            if(vet_teste[i]==escolhido){
                printf("%d\n",i+1);
                break;
            }
        }
    }

}
